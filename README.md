#### How to use

```bash
cmake -B build -DCMAKE_INSTALL_PREFIX=/usr/local .
cmake --build build
sudo cmake --install build
```

#### How to veirify

```c++
#include <thread>
#include <vector>
#include <iostream>
#include <atomic>
#include <cassert>
#include <safequeue>

SafeQueue<int> q;

void producer(int start, int count) {
    for (int i = 0; i < count; ++i) {
        q.push(start + i);
    }
}

void consumer(int total_count, std::atomic<int>& consumed) {
    for (int i = 0; i < total_count; ++i) {
        int val = q.get();
        ++consumed;
        // Optionally, process val or store it somewhere
    }
}

int main() {
    constexpr int items_per_producer = 1000;
    constexpr int num_producers = 4;
    constexpr int total_items = items_per_producer * num_producers;

    std::atomic<int> consumed_count{0};

    // Start producers
    std::vector<std::thread> producers;
    for (int i = 0; i < num_producers; ++i) {
        producers.emplace_back(producer, i * items_per_producer, items_per_producer);
    }

    // Start consumers
    std::thread consumer_thread(consumer, total_items, std::ref(consumed_count));

    // Join producers
    for (auto& p : producers) {
        p.join();
    }

    // Join consumer
    consumer_thread.join();

    // Validate all items consumed
    assert(consumed_count == total_items);
    std::cout << "All items consumed correctly!\n";

    return 0;
}
```

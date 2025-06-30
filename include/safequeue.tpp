#include <safequeue.h>

template <typename T>
void SafeQueue<T>::push(const T& value) {
    {
        // Release mutex before notifying the waiting thread
        std::lock_guard<std::mutex> lock(mMutex);
        mQueue.push(value);
    }
    // Notify only one waiting thread to avoid waking all threads,
    // which would cause unnecessary contention for the mutex
    // and waste CPU resources.
    mCv.notify_one();
}

template <typename T>
T SafeQueue<T>::get() {
    std::unique_lock<std::mutex> lock(mMutex);
    mCv.wait(lock, [this]{ return !mQueue.empty(); });
    T value = mQueue.front();
    mQueue.pop();
    return value;
}

template <typename T>
std::optional<T> SafeQueue<T>::try_get() {
    std::lock_guard<std::mutex> lock(mMutex);
    if (mQueue.empty())
        return std::nullopt;
    
    T value = mQueue.front();
    mQueue.pop();
    return value;
}
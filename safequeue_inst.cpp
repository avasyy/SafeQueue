#include "safequeue.h"

// Explicitly instantiate templates

// Single value of Basic types
template class SafeQueue<bool>;
template class SafeQueue<double>;
template class SafeQueue<uint32_t>;
template class SafeQueue<uint64_t>;
template class SafeQueue<std::string>;

// Pair of values of Basic Types (first=bool, second=...)
template class SafeQueue<std::pair<bool, bool>>;
template class SafeQueue<std::pair<bool, double>>;
template class SafeQueue<std::pair<bool, int8_t>>;
template class SafeQueue<std::pair<bool, int16_t>>;
template class SafeQueue<std::pair<bool, int32_t>>;
template class SafeQueue<std::pair<bool, int64_t>>;
// Pair of values of Basic Types (first=double, second=...)
template class SafeQueue<std::pair<double, bool>>;
template class SafeQueue<std::pair<double, double>>;
template class SafeQueue<std::pair<double, int8_t>>;
template class SafeQueue<std::pair<double, int16_t>>;
template class SafeQueue<std::pair<double, int32_t>>;
template class SafeQueue<std::pair<double, int64_t>>;
// Pair of values of Basic Types (first=int8_t, second=...)
template class SafeQueue<std::pair<int8_t, bool>>;
template class SafeQueue<std::pair<int8_t, double>>;
template class SafeQueue<std::pair<int8_t, int8_t>>;
template class SafeQueue<std::pair<int8_t, int16_t>>;
template class SafeQueue<std::pair<int8_t, int32_t>>;
template class SafeQueue<std::pair<int8_t, int64_t>>;
// Pair of values of Basic Types (first=int16_t, second=...)
template class SafeQueue<std::pair<int16_t, bool>>;
template class SafeQueue<std::pair<int16_t, double>>;
template class SafeQueue<std::pair<int16_t, int8_t>>;
template class SafeQueue<std::pair<int16_t, int16_t>>;
template class SafeQueue<std::pair<int16_t, int32_t>>;
template class SafeQueue<std::pair<int16_t, int64_t>>;
// Pair of values of Basic Types (first=int32_t, second=...)
template class SafeQueue<std::pair<int32_t, bool>>;
template class SafeQueue<std::pair<int32_t, double>>;
template class SafeQueue<std::pair<int32_t, int8_t>>;
template class SafeQueue<std::pair<int32_t, int16_t>>;
template class SafeQueue<std::pair<int32_t, int32_t>>;
template class SafeQueue<std::pair<int32_t, int64_t>>;
// Pair of values of Basic Types (first=int64_t, second=...)
template class SafeQueue<std::pair<int64_t, bool>>;
template class SafeQueue<std::pair<int64_t, double>>;
template class SafeQueue<std::pair<int64_t, int8_t>>;
template class SafeQueue<std::pair<int64_t, int16_t>>;
template class SafeQueue<std::pair<int64_t, int32_t>>;
template class SafeQueue<std::pair<int64_t, int64_t>>;
// Pair of values of Basic Types (first=uint8_t, second=...)
template class SafeQueue<std::pair<uint8_t, bool>>;
template class SafeQueue<std::pair<uint8_t, double>>;
template class SafeQueue<std::pair<uint8_t, int8_t>>;
template class SafeQueue<std::pair<uint8_t, int16_t>>;
template class SafeQueue<std::pair<uint8_t, int32_t>>;
template class SafeQueue<std::pair<uint8_t, int64_t>>;
// Pair of values of Basic Types (first=uint16_t, second=...)
template class SafeQueue<std::pair<uint16_t, bool>>;
template class SafeQueue<std::pair<uint16_t, double>>;
template class SafeQueue<std::pair<uint16_t, int8_t>>;
template class SafeQueue<std::pair<uint16_t, int16_t>>;
template class SafeQueue<std::pair<uint16_t, int32_t>>;
template class SafeQueue<std::pair<uint16_t, int64_t>>;
// Pair of values of Basic Types (first=uint32_t, second=...)
template class SafeQueue<std::pair<uint32_t, bool>>;
template class SafeQueue<std::pair<uint32_t, double>>;
template class SafeQueue<std::pair<uint32_t, int8_t>>;
template class SafeQueue<std::pair<uint32_t, int16_t>>;
template class SafeQueue<std::pair<uint32_t, int32_t>>;
template class SafeQueue<std::pair<uint32_t, int64_t>>;
// Pair of values of Basic Types (first=uint64_t, second=...)
template class SafeQueue<std::pair<uint64_t, bool>>;
template class SafeQueue<std::pair<uint64_t, double>>;
template class SafeQueue<std::pair<uint64_t, int8_t>>;
template class SafeQueue<std::pair<uint64_t, int16_t>>;
template class SafeQueue<std::pair<uint64_t, int32_t>>;
template class SafeQueue<std::pair<uint64_t, int64_t>>;

// Pair of values, where (first=double, second=std::vector<U>)
template class SafeQueue<std::pair<double, std::vector<bool>>>;
template class SafeQueue<std::pair<double, std::vector<double>>>;
template class SafeQueue<std::pair<double, std::vector<int8_t>>>;
template class SafeQueue<std::pair<double, std::vector<int16_t>>>;
template class SafeQueue<std::pair<double, std::vector<int32_t>>>;
template class SafeQueue<std::pair<double, std::vector<int64_t>>>;
template class SafeQueue<std::pair<double, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<double, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<double, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<double, std::vector<uint64_t>>>;
// Pair of values, where (first=int8_t, second=std::vector<U>)
template class SafeQueue<std::pair<int8_t, std::vector<bool>>>;
template class SafeQueue<std::pair<int8_t, std::vector<double>>>;
template class SafeQueue<std::pair<int8_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<int8_t, std::vector<uint64_t>>>;
// Pair of values, where (first=int16_t, second=std::vector<U>)
template class SafeQueue<std::pair<int16_t, std::vector<bool>>>;
template class SafeQueue<std::pair<int16_t, std::vector<double>>>;
template class SafeQueue<std::pair<int16_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<int16_t, std::vector<uint64_t>>>;
// Pair of values, where (first=int32_t, second=std::vector<U>)
template class SafeQueue<std::pair<int32_t, std::vector<bool>>>;
template class SafeQueue<std::pair<int32_t, std::vector<double>>>;
template class SafeQueue<std::pair<int32_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<int32_t, std::vector<uint64_t>>>;
// Pair of values, where (first=int64_t, second=std::vector<U>)
template class SafeQueue<std::pair<int64_t, std::vector<bool>>>;
template class SafeQueue<std::pair<int64_t, std::vector<double>>>;
template class SafeQueue<std::pair<int64_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<int64_t, std::vector<uint64_t>>>;
// Pair of values, where (first=uint8_t, second=std::vector<U>)
template class SafeQueue<std::pair<uint8_t, std::vector<bool>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<double>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<uint8_t, std::vector<uint64_t>>>;
// Pair of values, where (first=uint16_t, second=std::vector<U>)
template class SafeQueue<std::pair<uint16_t, std::vector<bool>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<double>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<uint16_t, std::vector<uint64_t>>>;
// Pair of values, where (first=uint32_t, second=std::vector<U>)
template class SafeQueue<std::pair<uint32_t, std::vector<bool>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<double>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<uint32_t, std::vector<uint64_t>>>;
// Pair of values, where (first=uint64_t, second=std::vector<U>)
template class SafeQueue<std::pair<uint64_t, std::vector<bool>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<double>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<int8_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<int16_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<int32_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<int64_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<uint64_t, std::vector<uint64_t>>>;

// Pair of values, where (first=std::string, second=std::vector<U>)
template class SafeQueue<std::pair<std::string, std::vector<bool>>>;
template class SafeQueue<std::pair<std::string, std::vector<double>>>;
template class SafeQueue<std::pair<std::string, std::vector<int8_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<int16_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<int32_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<int64_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<uint8_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<uint16_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<uint32_t>>>;
template class SafeQueue<std::pair<std::string, std::vector<uint64_t>>>;

// Vector of values type U
template class SafeQueue<std::vector<bool>>;
template class SafeQueue<std::vector<double>>;
template class SafeQueue<std::vector<int8_t>>;
template class SafeQueue<std::vector<int16_t>>;
template class SafeQueue<std::vector<int32_t>>;
template class SafeQueue<std::vector<int64_t>>;
template class SafeQueue<std::vector<uint8_t>>;
template class SafeQueue<std::vector<uint16_t>>;
template class SafeQueue<std::vector<uint32_t>>;
template class SafeQueue<std::vector<uint64_t>>;
template class SafeQueue<std::vector<std::string>>;
#if !defined(HAMMING_H)
#define HAMMING_H
#include <string>

namespace hamming {
    std::string::size_type compute(const std::string& lhs, const std::string& rhs);
}  // namespace hamming

#endif // HAMMING_H
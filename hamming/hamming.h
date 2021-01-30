#if !defined(HAMMING_H)
#define HAMMING_H
#include <string>

namespace hamming {
    int compute(std::string lhs, std::string rhs) throw(std::domain_error);
}  // namespace hamming

#endif // HAMMING_H
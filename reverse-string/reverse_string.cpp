#include "reverse_string.h"
#include <algorithm>

namespace reverse_string {
    std::string reverse_string(const std::string value) {
        std::string reversed(value.rbegin(), value.rend());
        return reversed;
    }
}  // namespace reverse_string

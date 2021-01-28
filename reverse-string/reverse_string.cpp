#include "reverse_string.h"
#include <algorithm>

namespace reverse_string {
    std::string reverse_string(const char* value) {
        std::string reversed(value);
        std::reverse(reversed.begin(), reversed.end());
        return reversed;
    }
}  // namespace reverse_string

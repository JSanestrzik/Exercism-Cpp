#include "reverse_string.h"
#include <algorithm>

namespace reverse_string {
    std::string reverse_string(std::string value) {
        std::reverse(value.begin(), value.end());
        return value;
    }
}  // namespace reverse_string

#include "reverse_string.h"
#include <algorithm>

namespace reverse_string {
    std::string reverse_string(const std::string& value) {
        std::string revVal(value.rbegin(), value.rend());
        return  revVal;
    }
}  // namespace reverse_string

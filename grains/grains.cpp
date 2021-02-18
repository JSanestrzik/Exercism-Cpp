#include "grains.h"

#include <stdexcept>
#include <cmath>

namespace grains {

    unsigned long long square(unsigned field_number) {
        if (field_number == 0 || field_number > 64) {
            throw std::invalid_argument("Invalid field number value");
        }
        return 1ULL << (field_number - 1);
    }

    unsigned long long total() {
        return ~0ULL;
    }

}  // namespace grains

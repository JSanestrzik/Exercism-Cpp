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
        //sum of a geometric sequence
        return 1ULL * ((1 - pow(2, 64)) / -1ULL);
    };

}  // namespace grains

#include "grains.h"

#include <stdexcept>

namespace grains {

    unsigned long long square(unsigned field_number) {
        if (field_number == 0 || field_number > 64) {
            throw std::invalid_argument("");
        }
        return 1ULL << (field_number - 1);
    }

    unsigned long long total() {
        unsigned long long sum = 0;
        for (int i = 1; i <= 64; i++) {
            sum += square(i);
        }
        return sum;
    }

}  // namespace grains

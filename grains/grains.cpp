#include "grains.h"

#include <map>
#include <stdexcept>

namespace grains {

    unsigned long long square(unsigned field_number) {
        static unsigned long long squares[64] = { 1ULL };
        if (field_number == 0) {
            throw std::invalid_argument("Field number can't be equal to 0");
        }
        if (squares[field_number - 1] != 0) {
            return squares[field_number - 1];
        } else {
            unsigned long long grains = square(field_number - 1) * 2ULL;
            squares[field_number -1] = grains;
            return grains;
        }
    }

    unsigned long long total() {
        unsigned long long sum = 0;
        for (int i = 1; i <= 64; i++) {
            sum += square(i);
        }
        return sum;
    }

}  // namespace grains

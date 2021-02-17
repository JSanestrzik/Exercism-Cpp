#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {
    int square_of_sum(int square) {
        return pow( ((2 + (square -1)) / 2) * square , 2);
    }

    int sum_of_squares(int square) {
        return (square * (square + 1) * (2 * square + 1)) / 6;
    }

    int difference(int square) {
        return square_of_sum(square) - sum_of_squares(square);
    }
}  // namespace difference_of_squares

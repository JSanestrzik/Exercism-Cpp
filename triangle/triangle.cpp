#include "triangle.h"
#include <algorithm>
#include <stdexcept>

namespace triangle {

    flavor kind(double a, double b, double c, double rel_epsilon, double abs_epsilon) {
        if ( a <= 0 || b <= 0 || c <= 0 ) {
            throw std::domain_error("Triangle side can't be zero or negative");
        }

        auto isEqual = [rel_epsilon, abs_epsilon](double x, double y) -> bool {
            double diff = std::abs(x -y);
            if (diff <= abs_epsilon)
                return true;
            double largest = std::max(std::abs(x), std::abs(y));
            return diff <= largest * rel_epsilon;
        };

        double s1 = std::min(a, b);
        double s2 = std::min(b, c);
        double shortSidesSum = s1 + (isEqual(s1, s2) ? std::min(a, c) : s2);
        double longSide = std::max({a, b, c});

        if (shortSidesSum < longSide) {
            throw std::domain_error("Invalid triangle side values");
        }

        int equal_sides =
                isEqual(a, b) +
                isEqual(b, c) +
                isEqual(a, c);

        switch (equal_sides) {
            case 3:
                return flavor::equilateral;
            case 1:
                return flavor::isosceles;
            default:
                return flavor::scalene;
        }
    }

}  // namespace triangle

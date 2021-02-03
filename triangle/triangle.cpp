#include "triangle.h"
#include <algorithm>

namespace triangle {

    constexpr flavor kind(double a, double b, double c) {
        if ( a <= 0 || b <= 0 || c <= 0 ) {
            throw std::domain_error("Triangle side can't be zero or negative");
        }

        double shortSide1 = std::min(a, b);
        double shortSide2 = std::min(b, c);
        double longSide = std::max(a, std::max(b, c));

        if ((shortSide1 + shortSide2) < longSide) {
            throw std::domain_error("Invalid triangle side values");
        }

        auto isEqual = [](double x, double y) -> bool {
            return std::abs(x - y) <= std::numeric_limits<double>::epsilon() * std::abs(x);
        };

        if (isEqual(shortSide1, shortSide2) && isEqual(shortSide1, longSide) && isEqual(shortSide2, longSide)) {
            return  flavor::equilateral;
        } else if (isEqual(shortSide1, shortSide2) || isEqual(shortSide1, longSide) || isEqual(shortSide2, longSide)) {
            return flavor::isosceles;
        } else {
            return flavor::scalene;
        }
    }

}  // namespace triangle

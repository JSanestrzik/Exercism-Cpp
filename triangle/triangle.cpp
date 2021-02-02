#include "triangle.h"

#include <map>
#include <array>
#include <algorithm>
#include <numeric>

namespace triangle {
    flavor kind(double a, double b, double c) {
        std::array<double, 3> values{a, b, c};
        std::sort(values.begin(), values.end());

        if (std::find_if(values.begin(), values.end(),[](double v){ return v <= 0; }) != values.end()) {
            throw std::domain_error("Triangle side can't be zero or negative");
        }

        double shortSidesSum = std::accumulate(values.begin(), values.end() -1, 0.0);
        double longSide = values.back();

        if (shortSidesSum < longSide) {
            throw std::domain_error("Invalid triangle side values");
        }

        std::map<double, int> sides;
        for (double val : values) {
            sides[val]++;
        }

        switch (sides.size()) {
            case 3:
                return flavor::scalene;
            case 2:
                return flavor::isosceles;
            default:
                return flavor::equilateral;
        }
    }
}  // namespace triangle

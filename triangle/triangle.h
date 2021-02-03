#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {

    enum class flavor {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double a, double b, double c, double rel_epsilon = 0.001, double abs_epsilon = 0.001);
}  // namespace triangle

#endif // TRIANGLE_H
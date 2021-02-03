#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#define EXERCISM_RUN_ALL_TESTS

namespace triangle {

    enum class flavor {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double a, double b, double c);
}  // namespace triangle

#endif // TRIANGLE_H
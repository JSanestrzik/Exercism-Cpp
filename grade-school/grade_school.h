#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <vector>
#include <string>

#define EXERCISM_RUN_ALL_TESTS

namespace grade_school {

    class school {
    public:
        school() = default;

        void add(std::string name, int grade);
        std::vector<std::string> roster() const;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H
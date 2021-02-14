#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <unordered_map>
#include <map>
#include <vector>
#include <string>

namespace grade_school {

    class school {
    public:
        void add(const std::string& name, int grade);
        const std::map<int, std::vector<std::string>>& roster() const;
        std::vector<std::string> grade(int grade) const;

    private:
        std::map<int, std::vector<std::string>> mRoster;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H
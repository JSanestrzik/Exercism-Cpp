#include "grade_school.h"

#include <algorithm>
#include <stdexcept>

namespace grade_school {

    static const std::vector<std::string> empty_grade = {};

    void school::add(const std::string& name, int grade) {
        std::vector<std::string>& grade_roster = mRoster[grade];
        grade_roster.insert(std::lower_bound(grade_roster.begin(), grade_roster.end(), name), name);
    }

    const std::map<int, std::vector<std::string>>& school::roster() const {
        return mRoster;
    }

    const std::vector<std::string>& school::grade(int grade) const {
        if (mRoster.find(grade) != mRoster.end()) {
            return mRoster.at(grade);
        } else {
            return empty_grade;
        }
    }
}  // namespace grade_school

#include "pangram.h"
#include <set>
#include <algorithm>

namespace pangram {

    bool is_pangram(std::string val, const std::size_t alphabet_count, const std::locale loc) {
        if (val.length() == 0) {
            return false;
        }

        val.erase(std::remove_if(val.begin(), val.end(), [loc](char c){ return !std::isalpha(c, loc);}), val.end());
        std::transform(val.begin(), val.end(), val.begin(), [](char c){ return std::tolower(c); });
        const std::set<char> pangram(val.begin(), val.end());
        return pangram.size() == alphabet_count;
    }
}  // namespace pangram

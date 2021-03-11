#include "pangram.h"
#include <set>
#include <algorithm>
#include <iostream>

namespace pangram {

    bool is_pangram(std::string val, const std::size_t alphabet_count, const std::locale loc) {
        if (val.length() < alphabet_count) {
            return false;
        }

        val.erase(std::remove_if(val.begin(), val.end(), [loc](char c){ return !std::isalpha(c, loc);}), val.end());
        std::transform(val.begin(), val.end(), val.begin(), [loc](char c){ return std::tolower(c, loc); });
        std::sort(val.begin(), val.end());
        val.erase(std::unique(val.begin(), val.end()), val.end());
        return val.length() == alphabet_count;
    }
}  // namespace pangram

#include "raindrops.h"

namespace raindrops {

    static const char FACTOR_3[] = "Pling";
    static const char FACTOR_5[] = "Plang";
    static const char FACTOR_7[] = "Plong";

    std::string convert(int drops) {
        std::string result;
        if (drops % 3 == 0) {
            result += FACTOR_3;
        }
        if (drops % 5 == 0) {
            result += FACTOR_5;
        }
        if (drops % 7 == 0) {
            result += FACTOR_7;
        }
        if (result.empty()) {
            result += std::to_string(drops);
        }
        return result;
    }
}  // namespace raindrops

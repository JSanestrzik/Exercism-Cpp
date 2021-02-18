#include "say.h"
#include <limits.h>
#include <stdexcept>
#include <vector>

namespace say {

    using ULL = unsigned long long;

    static const std::vector<std::string> below_twenty = {
            "zero", "one", "two","three","four", "five", "six", "seven",
            "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
            "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    static const std::vector<std::string> tens = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    static const std::string tens_separator = "-";
    static const std::string separator = " ";

    std::string in_english(const ULL number) {
        if (number < 0) {
            throw std::invalid_argument("Negative numbers are not supported");
        }

        if (number < 20) {
            return below_twenty[number];
        }

        if (number < 100) {
            return tens[(number / 10) - 2] + ((number % 10 != 0) ? tens_separator + in_english(number % 10) : "");
        }

        if (number < 1000) {
            return in_english(number / 100) + " hundred" + ((number % 100 != 0) ? separator + in_english(number % 100) : "");
        }

        if (number < 1000000) {
            return  in_english(number / 1000) + " thousand" + ((number % 1000 != 0) ? separator + in_english(number % 1000) : "");
        }

        if (number < 1000000000) {
            return  in_english(number / 1000000) + " million" + ((number % 1000000 != 0) ? separator + in_english(number % 1000000) : "");
        }

        if (number < 1000000000000) {
            return  in_english(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? separator + in_english(number % 1000000000) : "");
        }

        throw std::domain_error("Invalid input");
    }
}  // namespace say

#include "hamming.h"

#include <iostream>

namespace hamming {

    std::string::size_type compute(const std::string& lhs, const std::string& rhs)
    {
        if (lhs.length() != rhs.length())
        {
            throw std::domain_error("DNA strands differ in length");
        }

        std::string::size_type hammingDst = 0;

        for (auto itLhs = lhs.begin(), itRhs = rhs.begin(); itLhs != lhs.end(); ++itLhs, ++itRhs)
        {
            if (*itLhs != *itRhs)
            {
                hammingDst++;
            }
        }

        return hammingDst;
    }
}  // namespace hamming

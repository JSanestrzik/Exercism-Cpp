#include "hamming.h"

#include <iostream>

namespace hamming {

    int compute(std::string lhs, std::string rhs) throw(std::domain_error)
    {
        if (lhs.length() != rhs.length())
        {
            throw std::domain_error("DNA strands differ in length");
        }

        int hammingDst = 0;

        for (auto it = lhs.begin(); it < lhs.end(); it++)
        {
            if (*it != rhs[std::distance(lhs.begin(), it)])
            {
                hammingDst++;
            }
        }

        return hammingDst;
    }
}  // namespace hamming

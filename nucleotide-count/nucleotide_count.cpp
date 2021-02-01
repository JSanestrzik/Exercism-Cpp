#include "nucleotide_count.h"

#include <algorithm>
#include <functional>

#include <iostream>

namespace nucleotide_count {

    counter::counter(const std::string_view& dna): mDna(dna) {
        if (std::find_if(dna.begin(), dna.end(), [this](const char n) { return !validateNucleotidValue(n); }) != dna.end()) {
            throw std::invalid_argument("Invalid dna value.");
        }
    };

    std::map<char, int> counter::nucleotide_counts() const {
        int aCount = 0, cCount = 0, tCount = 0, gCount = 0;

        for (char it : mDna)
        {
            if (it == mAdenineKey) {
                aCount++;
            }
            if (it == mThymineKey) {
                tCount++;
            }
            if (it == mCytosineKey) {
                cCount++;
            }
            if (it == mGuanineKey) {
                gCount++;
            }
        }

        return {{mAdenineKey, aCount}, {mThymineKey, tCount}, {mCytosineKey, cCount}, {mGuanineKey, gCount }};
    }

    int counter::count(const char nucleotide) const {
        if (!validateNucleotidValue(nucleotide))
        {
            throw std::invalid_argument("Invalid nucleotide value.");
        }

        int nucleotideCount = 0;
        for (char it : mDna)
        {
            if (it == nucleotide) {
                nucleotideCount++;
            }
        }
        return nucleotideCount;
    }

    bool counter::validateNucleotidValue(const char nucleotid) const {
        return nucleotid == mAdenineKey ||
               nucleotid == mThymineKey ||
               nucleotid == mCytosineKey ||
               nucleotid == mGuanineKey;
    }
}  // namespace nucleotide_count

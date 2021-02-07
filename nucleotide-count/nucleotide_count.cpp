#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {

    counter::counter(const std::string_view dna): mNucleotideCounts() {
        if (std::all_of(dna.begin(), dna.end(), &counter::validateNucleotideValue)) {
            
        }
        if (std::all_of(dna.begin(), dna.end(), [](const char n) { return !validateNucleotideValue(n); }) != dna.end()) {
            throw std::invalid_argument("Invalid dna value.");
        }

        count_nucleotides(dna);
    };

    std::map<char, int> counter::nucleotide_counts() const {
        return mNucleotideCounts;
    };

    int counter::count(char nucleotide) const {
        if (validateNucleotideValue(nucleotide)) {
            return mNucleotideCounts.at(nucleotide);
        } else {
            throw std::invalid_argument("Invalid nucleotide value.");
        }
    };

    static bool counter::validateNucleotideValue(const char nucleotide) {
        return nucleotide == mAdenineKey ||
               nucleotide == mThymineKey ||
               nucleotide == mCytosineKey ||
               nucleotide == mGuanineKey;
    };

    void counter::count_nucleotides(const std::string_view dna) {
        int aCount = 0, cCount = 0, tCount = 0, gCount = 0;

        for (char it : dna)
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

        mNucleotideCounts = {{mAdenineKey, aCount},
                             {mCytosineKey, cCount},
                             {mThymineKey, tCount},
                             {mGuanineKey, gCount}};
    }

}  // namespace nucleotide_count

#include "nucleotide_count.h"

namespace nucleotide_count {

    counter::counter(const std::string_view& dna) {
        if (std::find_if(dna.begin(), dna.end(), [this](const char n) { return !validateNucleotidValue(n); }) != dna.end()) {
            throw std::invalid_argument("Invalid dna value.");
        }

        for (char n : dna) {
            mNucleotideCounts[n]++;
        }
    };

    std::map<char, int> counter::nucleotide_counts() const {
        return mNucleotideCounts;
    };

    int counter::count(const char nucleotide) const {
        return mNucleotideCounts[nucleotide];
    };

    constexpr bool counter::validateNucleotideValue(const char nucleotid) {
        return nucleotid == mAdenineKey ||
               nucleotid == mThymineKey ||
               nucleotid == mCytosineKey ||
               nucleotid == mGuanineKey;
    };

}  // namespace nucleotide_count

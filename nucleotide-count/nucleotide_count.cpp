#include "nucleotide_count.h"
#include <stdexcept>
#include <algorithm>

namespace nucleotide_count {

    static const char mAdenineKey = 'A';
    static const char mThymineKey = 'T';
    static const char mGuanineKey = 'G';
    static const char mCytosineKey = 'C';

    counter::counter(const std::string_view dna): mNucleotideCounts() {
        std::for_each(dna.begin(), dna.end(), &counter::validate_nucleotide);

        count_nucleotides(dna);
    };

    const std::map<char, int>& counter::nucleotide_counts() const {
        return mNucleotideCounts;
    };

    int counter::count(char nucleotide) const {
        validate_nucleotide(nucleotide);
        return mNucleotideCounts.at(nucleotide);
    };

    void counter::validate_nucleotide(const char nucleotide) {
        if (nucleotide != mAdenineKey &&
            nucleotide != mThymineKey &&
            nucleotide != mCytosineKey &&
            nucleotide != mGuanineKey) {
            throw std::invalid_argument("Invalid nucleotide value");
        }
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

        mNucleotideCounts = {
                {mAdenineKey, aCount},
                {mCytosineKey, cCount},
                {mThymineKey, tCount},
                {mGuanineKey, gCount}
        };
    }

}  // namespace nucleotide_count

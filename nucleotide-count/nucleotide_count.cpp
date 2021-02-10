#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {

    const char counter::mAdenineKey = 'A';
    const char counter::mThymineKey = 'T';
    const char counter::mGuanineKey = 'G';
    const char counter::mCytosineKey = 'C';

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
        if (nucleotide != counter::mAdenineKey &&
            nucleotide != counter::mThymineKey &&
            nucleotide != counter::mCytosineKey &&
            nucleotide != counter::mGuanineKey) {
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

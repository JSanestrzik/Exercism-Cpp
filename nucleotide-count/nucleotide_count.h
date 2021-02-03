#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

namespace nucleotide_count {
    class counter {
    public:
        constexpr counter(const std::string_view& dna): mDna(dna) {
            if (std::find_if(dna.begin(), dna.end(), [this](const char n) { return !validateNucleotidValue(n); }) != dna.end()) {
                throw std::invalid_argument("Invalid dna value.");
            }
        };

        std::map<char, int> nucleotide_counts() const;

        constexpr int count(const char nucleotide) const {
            if (!validateNucleotidValue(nucleotide))
            {
                throw std::invalid_argument("Invalid nucleotide value.");
            }

            return std::count(mDna.begin(), mDna.end(), nucleotide);
        };

    private:
        const std::string_view mDna;

        const char mThymineKey = 'T';
        const char mGuanineKey = 'G';
        const char mCytosineKey = 'C';
        const char mAdenineKey = 'A';

        constexpr bool validateNucleotidValue(const char nucleotid) const {
            return nucleotid == mAdenineKey ||
                   nucleotid == mThymineKey ||
                   nucleotid == mCytosineKey ||
                   nucleotid == mGuanineKey;
        };
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
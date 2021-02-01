#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

#define EXERCISM_RUN_ALL_TESTS

namespace nucleotide_count {
    class counter {
    public:
        counter(const std::string_view& dna);

        std::map<char, int> nucleotide_counts() const;
        int count(const char nucleotide) const;

    private:
        const std::string_view mDna;

        const char mThymineKey = 'T';
        const char mGuanineKey = 'G';
        const char mCytosineKey = 'C';
        const char mAdenineKey = 'A';

        bool validateNucleotidValue(const char nucleotid) const;
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
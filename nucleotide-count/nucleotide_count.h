#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

#define EXERCISM_RUN_ALL_TESTS

namespace nucleotide_count {
    class counter {
    public:
        explicit counter(const std::string_view dna);

        const std::map<char, int>& nucleotide_counts() const;
        int count(char nucleotide) const;

    private:
        std::map<char, int> mNucleotideCounts;

        static const char mThymineKey;
        static const char mGuanineKey;
        static const char mCytosineKey;
        static const char mAdenineKey;

        static void validate_nucleotide(const char nucleotid);
        void count_nucleotides(const std::string_view dna);
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
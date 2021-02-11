#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <string>
#include <map>

namespace nucleotide_count {
    class counter {
    public:
        explicit counter(const std::string_view dna);

        const std::map<char, int>& nucleotide_counts() const;
        int count(char nucleotide) const;

    private:
        std::map<char, int> mNucleotideCounts;

        static void validate_nucleotide(const char nucleotid);
        void count_nucleotides(const std::string_view dna);
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
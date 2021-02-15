#include "rna_transcription.h"
#include <stdexcept>
#include <algorithm>

namespace rna_transcription {

    static const char adenine_key = 'A';
    static const char cytosine_key = 'C';
    static const char guanine_key = 'G';
    static const char thymine_key = 'T';
    static const char uracil_key = 'U';

    char to_rna(char nucleotide) {
        switch (nucleotide) {
            case adenine_key:
                return  uracil_key;
            case cytosine_key:
                return guanine_key;
            case guanine_key:
                return cytosine_key;
            case thymine_key:
                return adenine_key;
            default:
                throw std::invalid_argument("Invalid nucleotide value");
        }
    }
}  // namespace rna_transcription

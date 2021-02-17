#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#define EXERCISM_RUN_ALL_TESTS

#include <string>

namespace rna_transcription {
        char to_rna(char nucleotide);
        std::string to_rna(std::string dna);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H
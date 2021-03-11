#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <string>
#include <locale>
#define EXERCISM_RUN_ALL_TESTS

namespace pangram {
    bool is_pangram(std::string val, const std::size_t alphabet_count = 26, const std::locale loc = std::locale("C"));
}  // namespace pangram

#endif // PANGRAM_H
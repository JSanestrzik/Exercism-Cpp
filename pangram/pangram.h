#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <string>
#include <locale>

namespace pangram {
    bool is_pangram(std::string val, const std::size_t alphabet_count = 26, const std::locale loc = std::locale("en_US.UTF8"));
}  // namespace pangram

#endif // PANGRAM_H
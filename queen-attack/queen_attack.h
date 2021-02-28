#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <utility>
#include <string>
#define  EXERCISM_RUN_ALL_TESTS

namespace queen_attack {
    class chess_board {
    public:
        chess_board(std::pair<int, int> white_queen_pos = {0, 3}, std::pair<int, int> black_queen_pos = { 7,3});

        const std::pair<int, int>& white() const;
        const std::pair<int, int>& black() const;
        bool can_attack() const ;

        operator std::string () const;
    private:
        const std::pair<int, int> m_white_queen_pos;
        const std::pair<int, int> m_black_queen_pos;

    };
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
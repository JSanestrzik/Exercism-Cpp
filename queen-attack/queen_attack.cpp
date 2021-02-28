#include "queen_attack.h"
#include <stdexcept>

namespace queen_attack {
    chess_board::chess_board(std::pair<int, int> white_queen_pos, std::pair<int, int> black_queen_pos):
        m_white_queen_pos(white_queen_pos),
        m_black_queen_pos(black_queen_pos) {
        if (white_queen_pos == black_queen_pos) {
            throw std::domain_error("Queen position values van't be the same");
        }
    }

    const std::pair<int, int>& chess_board::white() const {
        return m_white_queen_pos;
    }

    const std::pair<int, int>& chess_board::black() const {
        return m_black_queen_pos;
    }

    bool chess_board::can_attack() const {
        return true;
    }

    chess_board::operator std::string () const {
        return "";
    }
}  // namespace queen_attack

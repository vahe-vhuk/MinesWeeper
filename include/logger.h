#ifndef __LOGGER__
#define __LOGGER__

#include <string>
#include <vector>

#include "board.h"


class Logger {
    const GameBoard& game_board;

public:
    Logger(const GameBoard& b);



private:

    std::string get_symbol(int val) const;

public:
    void print() const;


    void game_over() const;
    void victory() const;
    void fail() const;

    void new_game_request() const;

    void choose_difficulty() const;

    void good_bye() const;
};





#endif

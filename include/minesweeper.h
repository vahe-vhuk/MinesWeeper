#ifndef __MINESWEEPER__
#define __MINESWEEPER__



#include "board.h"
#include "logger.h"

class MinesWeeper {
public:
    enum class Dificulty : char {
        Easy,
        Medium,
        Hard
    };

    GameBoard game_board;
    Logger logger;

    MinesWeeper();

    void start_new_game();

    void run();
};






#endif

#include "board.h"
#include "levels.h"

Board create_board_level_01()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = { .columns = 3, .rows = 3 };
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(2, 0, 0);  board.content[0][2] = create_cell(2, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0); board.content[1][2] = create_cell(3, 0, 0);
    board.content[2][0] = start;                 board.content[2][1] = create_cell(-1, 0, 1); board.content[2][2] = create_cell(3, 0, 1);

    return board;
}


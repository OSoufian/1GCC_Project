#include <stdio.h>
#include <stdlib.h>

#include "board.h"

int main()
{
    Board board = create_board();
    show_board(board);
    return 0;
}

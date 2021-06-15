#include "board.h"
#include "levels.h"

Board create_board_level_01()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 1};
    board.chains = 1;

    board.content[0][0] = start;  board.content[0][1] = create_cell(1, 0, 0);  board.content[0][2] = create_cell(1, 0, 0);  board.content[0][3] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_02()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  board.content[0][2] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);   board.content[1][1] = create_cell(1, 0, 0);   board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = start;                  board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = create_cell(-1, 0, 0);

    return board;
}

Board create_board_level_03()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = start;

    return board;
}

Board create_board_level_04()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 5, .rows = 5};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(1, 0, 0);   board.content[0][3] = create_cell(1, 0, 0);   board.content[0][4] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(-1, 0, 0);  board.content[1][3] = create_cell(-1, 0, 0);  board.content[1][4] = create_cell(-1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = start;                  board.content[2][3] = create_cell(1, 0, 0);   board.content[2][4] = create_cell(1, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(-1, 0, 0);  board.content[3][2] = create_cell(-1, 0, 0);  board.content[3][3] = create_cell(-1, 0, 0);  board.content[3][4] = create_cell(1, 0, 0);
    board.content[4][0] = create_cell(1, 0, 0);  board.content[4][1] = create_cell(1, 0, 0);   board.content[4][2] = create_cell(1, 0, 0);   board.content[4][3] = create_cell(1, 0, 0);   board.content[4][4] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_05()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 4};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(1, 0, 0);  
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = start;                  board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = create_cell(-1, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(1, 0, 0);   board.content[3][2] = create_cell(1, 0, 0);
    return board;
}

Board create_board_level_06()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 5, .rows = 5};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(1, 0, 0);   board.content[0][3] = create_cell(1, 0, 0);  board.content[0][4] = create_cell(-1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(-1, 0, 0);  board.content[1][3] = create_cell(1, 0, 0);  board.content[1][4] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = start;                  board.content[2][3] = create_cell(1, 0, 0);  board.content[2][4] = create_cell(-1, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(-1, 0, 0);  board.content[3][2] = create_cell(-1, 0, 0);  board.content[3][3] = create_cell(1, 0, 0);  board.content[3][4] = create_cell(-1, 0, 0);
    board.content[4][0] = create_cell(1, 0, 0);  board.content[4][1] = create_cell(1, 0, 0);   board.content[4][2] = create_cell(1, 0, 0);   board.content[4][3] = create_cell(1, 0, 0);  board.content[4][4] = create_cell(-1, 0, 0);

    return board;
}

Board create_board_level_07()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 2, .rows = 2};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0); 
    board.content[1][0] = start;                 board.content[1][1] = create_cell(2, 0, 0);  

    return board;
}

Board create_board_level_08()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 2, .rows = 3};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0); 
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = start;
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(2, 0, 0);

    return board;
}

Board create_board_level_09()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 2, .rows = 4};
    board.chains = 1;

    board.content[0][0] = create_cell(2, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(1, 0, 0); 
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(1, 0, 0); 
    board.content[3][0] = start;                 board.content[3][1] = create_cell(-1, 0, 0);

    return board;
}

Board create_board_level_10()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 1;

    board.content[0][0] = create_cell(2, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);  board.content[0][2] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(2, 0, 0);  board.content[1][1] = start;                 board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(1, 0, 0);  board.content[2][2] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_11()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 4};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(3, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = start;                  board.content[1][2] = create_cell(2, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = create_cell(1, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(1, 0, 0);   board.content[3][2] = create_cell(1, 0, 0);
    return board;

}

Board create_board_level_12()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = { .columns = 3, .rows = 4 };
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  board.content[0][2] = start;
    board.content[1][0] = create_cell(1, 0, 0);   board.content[1][1] = create_cell(1, 0, 0);   board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);   board.content[2][1] = create_cell(1, 0, 0);   board.content[2][2] = create_cell(1, 0, 0);
    board.content[3][0] = create_cell(2, 0, 0);   board.content[3][1] = create_cell(2, 0, 0);   board.content[3][2] = create_cell(3, 0, 0);
    return board;

}

Board create_board_level_13()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 4};
    board.chains = 1;

    board.content[0][0] = create_cell(3, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  board.content[0][2] = start;
    board.content[1][0] = create_cell(3, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);   board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(3, 0, 0);  board.content[2][1] = create_cell(2, 0, 0);   board.content[2][2] = create_cell(2, 0, 0);
    board.content[3][0] = create_cell(3, 0, 0);  board.content[3][1] = create_cell(2, 0, 0);   board.content[3][2] = create_cell(2, 0, 0);

    return board;
}

Board create_board_level_14()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 4};
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  board.content[0][2] = create_cell(-1, 0, 0);  board.content[0][3] = create_cell(5, 0, 0);
    board.content[1][0] = create_cell(-1, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);   board.content[1][2] = create_cell(2, 0, 0);   board.content[1][3] = create_cell(4, 0, 0); 
    board.content[2][0] = create_cell(-1, 0, 0);  board.content[2][1] = create_cell(2, 0, 0);   board.content[2][2] = create_cell(2, 0, 0);   board.content[2][3] = create_cell(3, 0, 0);
    board.content[3][0] = start;                  board.content[3][1] = create_cell(1, 0, 0);   board.content[3][2] = create_cell(2, 0, 0);   board.content[3][3] = create_cell(2, 0, 0);   

    return board;
}

Board create_board_level_15()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 5, .rows = 5};
    board.chains = 1;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(1, 0, 0);  board.content[0][3] = create_cell(3, 0, 0);  board.content[0][4] = create_cell(4, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);  board.content[1][3] = create_cell(3, 0, 0);  board.content[1][4] = create_cell(5, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = start;                  board.content[2][2] = create_cell(1, 0, 0);  board.content[2][3] = create_cell(3, 0, 0);  board.content[2][4] = create_cell(3, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(-1, 0, 0);  board.content[3][2] = create_cell(1, 0, 0);  board.content[3][3] = create_cell(1, 0, 0);  board.content[3][4] = create_cell(3, 0, 0);
    board.content[4][0] = create_cell(1, 0, 0);  board.content[4][1] = create_cell(1, 0, 0);   board.content[4][2] = create_cell(1, 0, 0);  board.content[4][3] = create_cell(2, 0, 0);  board.content[4][4] = create_cell(2, 0, 0);

    return board;

}

Board create_board_level_16()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 6, .rows = 5};
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0);  board.content[0][1] = create_cell(7, 0, 0);  board.content[0][2] = create_cell(6, 0, 0);   board.content[0][3] = create_cell(3, 0, 0);  board.content[0][4] = create_cell(2, 0, 0);   board.content[0][5] = create_cell(-1, 0, 0);
    board.content[1][0] = create_cell(9, 0, 0);   board.content[1][1] = create_cell(8, 0, 0);  board.content[1][2] = create_cell(5, 0, 0);   board.content[1][3] = create_cell(4, 0, 0);  board.content[1][4] = create_cell(1, 0, 0);   board.content[1][5] = start;
    board.content[2][0] = create_cell(-1, 0, 0);  board.content[2][1] = create_cell(4, 0, 0);  board.content[2][2] = create_cell(4, 0, 0);   board.content[2][3] = create_cell(4, 0, 0);  board.content[2][4] = create_cell(-1, 0, 0);  board.content[2][5] = create_cell(-1, 0, 0);
    board.content[3][0] = create_cell(-1, 0, 0);  board.content[3][1] = create_cell(4, 0, 0);  board.content[3][2] = create_cell(-1, 0, 0);  board.content[3][3] = create_cell(4, 0, 0);  board.content[3][4] = create_cell(-1, 0, 0);  board.content[3][5] = create_cell(-1, 0, 0);
    board.content[4][0] = create_cell(-1, 0, 0);  board.content[4][1] = create_cell(4, 0, 0);  board.content[4][2] = create_cell(4, 0, 0);   board.content[4][3] = create_cell(4, 0, 0);  board.content[4][4] = create_cell(-1, 0, 0);  board.content[4][5] = create_cell(-1, 0, 0);

    return board;
}

Board create_board_level_17()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 6, .rows = 6};
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  board.content[0][2] = create_cell(-1, 0, 0);   board.content[0][3] = create_cell(-1, 0, 0);  board.content[0][4] = start;                  board.content[0][5] = create_cell(-1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);   board.content[1][1] = create_cell(1, 0, 0);   board.content[1][2] = create_cell(1, 0, 0);    board.content[1][3] = create_cell(1, 0, 0);   board.content[1][4] = create_cell(1, 0, 0);   board.content[1][5] = create_cell(-1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);   board.content[2][1] = create_cell(1, 0, 0);   board.content[2][2] = create_cell(1, 0, 0);    board.content[2][3] = create_cell(1, 0, 0);   board.content[2][4] = create_cell(8, 0, 0);   board.content[2][5] = create_cell(9, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);   board.content[3][1] = create_cell(1, 0, 0);   board.content[3][2] = create_cell(-1, 0, 0);   board.content[3][3] = create_cell(-1, 0, 0);  board.content[3][4] = create_cell(-1, 0, 0);  board.content[3][5] = create_cell(-1, 0, 0);
    board.content[4][0] = create_cell(1, 0, 0);   board.content[4][1] = create_cell(1, 0, 0);   board.content[4][2] = create_cell(1, 0, 0);    board.content[4][3] = create_cell(1, 0, 0);   board.content[4][4] = create_cell(1, 0, 0);   board.content[4][5] = create_cell(-1, 0, 0);
    board.content[5][0] = create_cell(1, 0, 0);   board.content[5][1] = create_cell(1, 0, 0);   board.content[5][2] = create_cell(1, 0, 0);    board.content[5][3] = create_cell(1, 0, 0);   board.content[5][4] = create_cell(1, 0, 0);   board.content[5][5] = create_cell(-1, 0, 0);

    return board;
}

Board create_board_level_18()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 4};
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0); board.content[0][1] = create_cell(9, 0, 0);  board.content[0][2] = create_cell(8, 0, 0);  board.content[0][3] = create_cell(7, 0, 0);
    board.content[1][0] = create_cell(4, 0, 0);  board.content[1][1] = create_cell(4, 0, 0);  board.content[1][2] = create_cell(4, 0, 0);  board.content[1][3] = create_cell(6, 0, 0);
    board.content[2][0] = create_cell(4, 0, 0);  board.content[2][1] = start;                 board.content[2][2] = create_cell(4, 0, 0);  board.content[2][3] = create_cell(5, 0, 0);
    board.content[3][0] = create_cell(4, 0, 0);  board.content[3][1] = create_cell(4, 0, 0);  board.content[3][2] = create_cell(-1, 0, 0); board.content[3][3] = create_cell(-1, 0, 0);

    return board;
}

Board create_board_level_19()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 5};
    board.chains = 1;

    board.content[0][0] = create_cell(-1, 0, 0);  board.content[0][1] = create_cell(2, 0, 0);  board.content[0][2] = create_cell(2, 0, 0);  board.content[0][3] = create_cell(2, 0, 0);
    board.content[1][0] = create_cell(-1, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);  board.content[1][2] = create_cell(2, 0, 0);  board.content[1][3] = create_cell(2, 0, 0); 
    board.content[2][0] = start;                  board.content[2][1] = create_cell(1, 0, 0);  board.content[2][2] = create_cell(2, 0, 0);  board.content[2][3] = create_cell(9, 0, 0);
    board.content[3][0] = create_cell(-1, 0, 0);  board.content[3][1] = create_cell(2, 0, 0);  board.content[3][2] = create_cell(2, 0, 0);  board.content[3][3] = create_cell(8, 0, 0);
    board.content[4][0] = create_cell(-1, 0, 0);  board.content[4][1] = create_cell(2, 0, 0);  board.content[4][2] = create_cell(2, 0, 0);  board.content[4][3] = create_cell(7, 0, 0);    

    return board;
}

Board create_board_level_20()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 5, .rows = 5};
    board.chains = 1;

    board.content[0][0] = create_cell(4, 0, 0);  board.content[0][1] = create_cell(4, 0, 0);  board.content[0][2] = create_cell(4, 0, 0);  board.content[0][3] = create_cell(4, 0, 0);  board.content[0][4] = create_cell(4, 0, 0);
    board.content[1][0] = create_cell(4, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);  board.content[1][2] = create_cell(2, 0, 0);  board.content[1][3] = create_cell(2, 0, 0);  board.content[1][4] = create_cell(4, 0, 0);
    board.content[2][0] = create_cell(4, 0, 0);  board.content[2][1] = create_cell(2, 0, 0);  board.content[2][2] = start;                 board.content[2][3] = create_cell(4, 0, 0);  board.content[2][4] = create_cell(4, 0, 0);
    board.content[3][0] = create_cell(4, 0, 0);  board.content[3][1] = create_cell(2, 0, 0);  board.content[3][2] = create_cell(2, 0, 0);  board.content[3][3] = create_cell(4, 0, 0);  board.content[3][4] = create_cell(4, 0, 0);
    board.content[4][0] = create_cell(4, 0, 0);  board.content[4][1] = create_cell(4, 0, 0);  board.content[4][2] = create_cell(4, 0, 0);  board.content[4][3] = create_cell(6, 0, 0);  board.content[4][4] = create_cell(8, 0, 0);

    return board;
}

Board create_board_level_21()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 2;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(-1, 0, 0);  board.content[0][2] = create_cell(0, 2, 1);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = start;                 board.content[2][1] = create_cell(-1, 0, 0);  board.content[2][2] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_22()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 2;

    board.content[0][0] = create_cell(0, 2, 1);   board.content[0][1] = create_cell(1, 0, 0);   board.content[0][2] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(-1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);   board.content[2][1] = create_cell(1, 0, 0);   board.content[2][2] = start;

    return board;
}

Board create_board_level_23()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 4};
    board.chains = 2;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);  board.content[0][2] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(1, 0, 0);  board.content[1][2] = create_cell(-1, 0, 0);
    board.content[2][0] = create_cell(0, 2, 1);  board.content[2][1] = create_cell(1, 0, 0);  board.content[2][2] = create_cell(-1, 0, 0);
    board.content[3][0] = start;                 board.content[3][1] = create_cell(1, 0, 0);  board.content[3][2] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_24()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 4};
    board.chains = 2;

    board.content[0][0] = create_cell(0, 2, 1);  board.content[0][1] = create_cell(1, 0, 0);  board.content[0][2] = create_cell(-1, 0, 0); board.content[0][3] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);  board.content[1][3] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = start;                 board.content[2][2] = create_cell(1, 0, 0);  board.content[2][3] = create_cell(-1, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(1, 0, 0);  board.content[3][2] = create_cell(1, 0, 0);  board.content[3][3] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_25()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 2;

    board.content[0][0] = create_cell(1, 2, 1);  board.content[0][1] = create_cell(1, 0, 0);  board.content[0][2] = create_cell(0, 2, 1);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(-1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = start;                 board.content[2][1] = create_cell(2, 0, 0);  board.content[2][2] = create_cell(1, 0, 0);

    return board;
}

Board create_board_level_26()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 3};
    board.chains = 2;

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0);  board.content[0][2] = create_cell(2, 0, 0);  board.content[0][3] = create_cell(2, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(1, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);  board.content[1][3] = start; 
    board.content[2][0] = create_cell(0, 2, 1);  board.content[2][1] = create_cell(-1, 0, 0); board.content[2][2] = create_cell(2, 0, 0);  board.content[2][3] = create_cell(2, 0, 0);

    return board;
}

Board create_board_level_27()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 5};
    board.chains = 2;

    board.content[0][0] = create_cell(-1, 0, 0); board.content[0][1] = start;                 board.content[0][2] = create_cell(1, 0, 0);  board.content[0][3] = create_cell(-1, 0, 0);
    board.content[1][0] = create_cell(3, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);  board.content[1][3] = create_cell(1, 0, 0); 
    board.content[2][0] = create_cell(3, 0, 0);  board.content[2][1] = create_cell(2, 0, 0);  board.content[2][2] = create_cell(1, 0, 0);  board.content[2][3] = create_cell(1, 0, 0);
    board.content[3][0] = create_cell(2, 0, 0);  board.content[3][1] = create_cell(2, 0, 0);  board.content[3][2] = create_cell(1, 0, 0);  board.content[3][3] = create_cell(0, 2, 1);
    board.content[4][0] = create_cell(2, 0, 0);  board.content[4][1] = create_cell(3, 0, 0);  board.content[4][2] = create_cell(1, 0, 0);  board.content[4][3] = create_cell(1, 0, 0);    

    return board;
}

Board create_board_level_28()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 3, .rows = 3};
    board.chains = 2;

    board.content[0][0] = start;                 board.content[0][1] = create_cell(6, 0, 0);  board.content[0][2] = create_cell(5, 0, 0);
    board.content[1][0] = create_cell(2, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);  board.content[1][2] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(4, 0, 0);  board.content[2][1] = create_cell(3, 0, 0);  board.content[2][2] = create_cell(0, 2, 1);

    return board;
}

Board create_board_level_29()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 5, .rows = 4};
    board.chains = 2;

    board.content[0][0] = create_cell(4, 0, 0);  board.content[0][1] = create_cell(2, 0, 0);  board.content[0][2] = create_cell(-1, 0, 0); board.content[0][3] = create_cell(1, 0, 0);  board.content[0][4] = start;
    board.content[1][0] = create_cell(0, 2, 1);  board.content[1][1] = create_cell(2, 0, 0);  board.content[1][2] = create_cell(2, 0, 0);  board.content[1][3] = create_cell(1, 0, 0);  board.content[1][4] = create_cell(1, 0, 0);
    board.content[2][0] = create_cell(2, 0, 0);  board.content[2][1] = create_cell(2, 0, 0);  board.content[2][2] = create_cell(2, 0, 0);  board.content[2][3] = create_cell(2, 0, 0);  board.content[2][4] = create_cell(2, 0, 0);
    board.content[3][0] = create_cell(4, 0, 0);  board.content[3][1] = create_cell(3, 0, 0);  board.content[3][2] = create_cell(-1, 0, 0); board.content[3][3] = create_cell(2, 0, 0);  board.content[3][4] = create_cell(2, 0, 0);

    return board;
}

Board create_board_level_30()
{
    Cell start = create_cell(0, 4, 1);
    start.active = true;

    Board board = {.columns = 4, .rows = 4};
    board.chains = 2;

    board.content[0][0] = create_cell(2, 0, 0);  board.content[0][1] = create_cell(2, 0, 0);  board.content[0][2] = create_cell(3, 0, 0); board.content[0][3] = create_cell(3, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(2, 0, 0);  board.content[1][2] = create_cell(2, 0, 0);  board.content[1][3] = create_cell(0, 2, 1);
    board.content[2][0] = create_cell(1, 0, 0);  board.content[2][1] = start;                 board.content[2][2] = create_cell(2, 0, 0);  board.content[2][3] = create_cell(1, 0, 0);
    board.content[3][0] = create_cell(1, 0, 0);  board.content[3][1] = create_cell(1, 0, 0);  board.content[3][2] = create_cell(3, 0, 0);  board.content[3][3] = create_cell(3, 0, 0);

    return board;
}

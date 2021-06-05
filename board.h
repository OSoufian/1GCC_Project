#pragma once
#ifndef _INC_BOARD 
#define _INC_BOARD

typedef struct {
    int value;
    int color;
    int row;
    int column;
} Cell;

typedef struct {
    int rows;
    int columns;
    Cell *content;
} Board;

Board create_board();
Cell create_cell(int value, int color, int row, int column);

void show_board(Board board);
void show_cell(Cell cell);

#endif

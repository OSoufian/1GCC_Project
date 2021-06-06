#pragma once
#ifndef _INC_BOARD 
#define _INC_BOARD

typedef struct {
    int value;
    int color;
    int index;
} Cell;

typedef struct {
    int rows;
    int columns;
    Cell content[10][10];
} Board;

Cell create_cell(int value, int color, int index);
Board create_board();

void show_cell(Cell cell);
void show_board(Board board);

#endif

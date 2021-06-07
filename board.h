#pragma once
#ifndef _INC_BOARD 
#define _INC_BOARD
#include <stdbool.h>

typedef struct {
    int value;
    int color;
    int index;
    int row;
    int column;
    bool active;
    bool selected;
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
void print_color(const char* s, int color);
void print_selected_cell(const char* s, int front_color, int back_color);
void select_chain(Board board);
int get_next_color(int color);
Cell get_active_cell(Board board);

#endif

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
    int chains;
    Cell content[10][10];
} Board;

typedef struct {
    int row;
    int column;
    bool valid;
} Position;

typedef struct {
    bool valid;
    char content;
    int value;
} Action;


Cell create_cell(int value, int color, int index);
Board create_board(int level);

void print_board(Board board);
void print_cell(Cell cell);
void select_chain(Board* board);

int get_next_color(Board board, int color);
Cell get_active_cell(Board board);

bool move(Board* board, char action);
Position can_move(Board board, Cell cell, char action);
bool is_end_game(Board board);

void remove_move(Board* board);
void erase_chain(Board* board);
void restart(Board* board, int level);

#endif

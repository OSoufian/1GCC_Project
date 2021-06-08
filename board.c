#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "board.h"


void fill_color(Board* board);
void move(Board* board);

//Création des cellules
Cell create_cell(int value, int color, int index)
{
    Cell cell = { .value = value, .color = color , .index = index, .active = false};
    return cell;
}

//Créer la grille
Board create_board()
{
    Cell start = create_cell(0, 4, 0);
    start.active = true;

    Board board = { .columns = 3, .rows = 3, .x = 2, .content = malloc(board.columns * board.rows * sizeof(Cell))};

    fill_color(&board);

    board.content[0][0] = create_cell(1, 0, 0);  board.content[0][1] = create_cell(1, 0, 0); board.content[0][2] = create_cell(1, 0, 0);
    board.content[1][0] = create_cell(1, 0, 0);  board.content[1][1] = create_cell(2, 0, 0); board.content[1][2] = create_cell(2, 0, 0);
    board.content[2][0] = start;  board.content[2][1] = create_cell(3, 0, 0); board.content[2][2] = create_cell(0, 2, 0);

    return board;
}

void fill_color(Board *board) {
    int colors[5] = {4, 2, 1, 5, 6};
    int board_x = board->x;
    for (int x = 0; x < board_x; x++) {
        board->colors[x] = colors[x];
    }
}

//Afficher une cellule
void show_cell(Cell cell) {

    char c[] = "X";
    if (cell.value != 0) _itoa(cell.value, c, 10);
    if (cell.active == true) print_selected_cell(c, cell.color, 7);
    else print_color(c, cell.color);

}

//Afficher la grille
void show_board(Board board) {

    for (int row = 0; row < board.rows; row++) {
        for (int column = 0; column < board.columns; column++) {
            show_cell(board.content[row][column]);
        }
        printf("\n");
    }

}

void select_chain(Board *board) {
    Cell cell = get_active_cell(*board);
    int next_color = get_next_color(*board, cell.color);
    Cell new_cell;
    for (int row = 0; row < board->rows; row++) {
        for (int column = 0; column < board->columns; column++) {
            if (board->content[row][column].color == next_color) {
                board->content[cell.row][cell.column].active = false;
                board->content[row][column].active = true;
            }
        }
    }
}

const red = 4;
const green = 2;
const blue = 1;
const pink = 5;
const yellow = 6;

int get_next_color(Board board, int color) {

    for (int i = 0; i < 5; i++) {
        if (board.colors[i] == color) {
            if (i == board.x - 1) return board.colors[0];
            return board.colors[i + 1];
        }
    }
}

Cell get_active_cell(Board board)
{
    Cell cell;
    for (int row = 0; row < board.rows; row++) {
        for (int column = 0; column < board.columns; column++) {
            if (board.content[row][column].active == true) {
                cell = board.content[row][column];
                cell.row = row;
                cell.column = column;
                return cell;
            }
        }
    }
}


void print_color(char* s, int color)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | color);
    printf(s);
    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | 7);
}

void print_selected_cell(char* s, int front_color, int back_color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color * 16 | FOREGROUND_INTENSITY | front_color);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}

void move(Board* board) {
    Cell cell = get_active_cell(*board);
    Cell new_cell;
    for (int row = 0; row < board->rows; row++) {
        for (int column = 0; column < board->columns; column++) {
            if (board->content[row][column] == board->content[cell.row - 1][cell.column]) {
                board->content[row][column].selected = true;
                board->content[row][column].active = true;
                board->content[cell.row][cell.column].active = false;
                board->content[row][column].index = board->content[cell.row][cell.column].index + 1 ;

            }
        }
    }
}




//board[i][j].color = board[i-1][j].color

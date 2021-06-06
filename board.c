#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "board.h"

void print_color(const char* s, int color);

//Création des cellules
Cell create_cell(int value, int color, int index)
{
    Cell cell = { .value = value, .color = color , .index = index };
    return cell;
}

//Créer la grille
Board create_board()
{

    Board board = { .columns = 3, .rows = 3, .content = malloc(board.columns * board.rows * sizeof(Cell))};

    board.content[0][0] = create_cell(1, 7, 0);  board.content[0][1] = create_cell(1, 7, 0); board.content[0][2] = create_cell(1, 7, 0);
    board.content[1][0] = create_cell(1, 7, 0);  board.content[1][1] = create_cell(2, 7, 0); board.content[1][2] = create_cell(2, 7, 0);
    board.content[2][0] = create_cell(0, 1, 0);  board.content[2][1] = create_cell(3, 7, 0); board.content[2][2] = create_cell(3, 7, 0);

    return board;
}

//Afficher une cellule
void show_cell(Cell cell) {

    char c[] = "X";
    if (cell.value != 0) _itoa(cell.value, c, 10);
    print_color(c, cell.color);
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

void print_color(const char* s, int color)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | color);
    printf(s);
    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | 7);
}

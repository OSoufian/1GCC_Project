#include <stdio.h>
#include <stdlib.h>

#include "board.h"


//Création des cellules
Cell create_cell(int value, int color, int row, int column)
{
    Cell cell = { .value = value, .color = color , .column = column, .row = row };
    return cell;
}

//Créer la grille
Board create_board()
{

    Board board = { .columns = 3, .rows = 3, .content = malloc(board.columns * board.rows * sizeof(Cell)) };

    board.content[0] = create_cell(1, 0, 0, 0);  board.content[1] = create_cell(1, 0, 0, 1); board.content[2] = create_cell(1, 0, 0, 2);
    board.content[3] = create_cell(1, 0, 1, 0);  board.content[4] = create_cell(2, 0, 1, 1); board.content[5] = create_cell(2, 0, 1, 2);
    board.content[6] = create_cell(0, 1, 2, 0);  board.content[7] = create_cell(3, 0, 2, 1); board.content[8] = create_cell(3, 0, 2, 2);

    return board;
}

//Afficher une cellule
void show_cell(Cell cell) {
    printf("%i", cell.value);
}

//Afficher la grille
void show_board(Board board) {

    for (int row = 0; row < board.rows; row++) {
        for (int column = 0; column < board.columns; column++) {
            show_cell(board.content[row * board.rows + column]);
        }
        printf("\n");
    }

}
#include <stdio.h>
#include <stdlib.h>

//Définition des fonctions
void show_board(struct Cell* grid);
void show_cell(struct Cell cell);
struct Board create_board();
struct Cell create_cell(int value, int color, int x, int y);



//Création d'une structure pour les cellules
struct Cell {
    int value;
    int color;
    int x;
    int y;
};

//Création d'une structure pour les plateaux de jeu
struct Board {
    int x;
    int y;
    struct Cell *content;
};


int main()
{
    struct Board board = create_board();
    return 0;
}

//Afficher la grille
void show_board(struct Board board) {

    for (int i = 0; i < board.x; i++) {
        for (int j = 0; j < board.y; j++) {
            show_cell(board.content[i+j*i]);
        }
        printf("\n");
    }

}

//Afficher une cellule
void show_cell(struct Cell cell){
    printf(cell.value);
}

//Créer la grille
struct Board create_board() {

    struct Board board;
    board.x = 3;
    board.y = 3;
    board.content = malloc(board.x * board.y * sizeof(struct Cell));

    board.content[0] = create_cell(1, 0, 0, 0);  board.content[1] = create_cell(1, 0, 0, 1); board.content[2] = create_cell(1, 0, 0, 2);
    board.content[3] = create_cell(1, 0, 1, 0);  board.content[4] = create_cell(2, 0, 1, 1); board.content[5] = create_cell(2, 0, 1, 2);
    board.content[6] = create_cell(0, 1, 2, 0);  board.content[7] = create_cell(3, 0, 2, 1); board.content[8] = create_cell(3, 0, 2, 2);

    return board;
}

//Création des cellules
struct Cell create_cell(int value, int color, int x, int y)
{
    struct Cell cell;
    cell.value = value;
    cell.color = color;
    cell.x = x;
    cell.y = y;
    return cell;
}
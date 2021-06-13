#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "board.h"
#include "levels.h"

//Création des cellules
Cell create_cell(int value, int color, int index)
{
    Cell cell = {.value = value, .color = color , .index = index, .active = false};
    return cell;
}

//Créer la grille
Board create_board(int level)
{
    Board board;
    switch (level)
    {
    case 1: board = create_board_level_01(); break;
    case 2: board = create_board_level_02(); break;
    case 3: board = create_board_level_03(); break;
    case 4: board = create_board_level_04(); break;
    case 5: board = create_board_level_05(); break;
    case 6: board = create_board_level_06(); break;
    case 7: board = create_board_level_07(); break;
    case 8: board = create_board_level_08(); break;
    case 9: board = create_board_level_09(); break;
    case 10: board = create_board_level_10(); break;
    case 11: board = create_board_level_11(); break;
    case 12: board = create_board_level_12(); break;
    case 13: board = create_board_level_13(); break;
    case 14: board = create_board_level_14(); break;
    case 15: board = create_board_level_15(); break;
    case 16: board = create_board_level_16(); break;
    case 17: board = create_board_level_17(); break;
    case 18: board = create_board_level_18(); break;
    case 19: board = create_board_level_19(); break;
    case 20: board = create_board_level_20(); break;
    case 21: board = create_board_level_21(); break;
    case 22: board = create_board_level_22(); break;
    case 23: board = create_board_level_23(); break;
    case 24: board = create_board_level_24(); break;
    case 25: board = create_board_level_25(); break;
    case 26: board = create_board_level_26(); break;
    case 27: board = create_board_level_27(); break;
    case 28: board = create_board_level_28(); break;
    case 29: board = create_board_level_29(); break;
    case 30: board = create_board_level_30(); break;
    }

    return board;
}

//Affichage de la grille
void print_board(Board board)
{
    printf("-- Cardinal Chains --\n\n");
    for (int row = 0; row < board.rows; row++) {
        printf("\t");
        for (int column = 0; column < board.columns; column++) {
            print_cell(board.content[row][column]);
        }
        printf("\n");
    }
}

//Changer la chaîne en cours
void select_chain(Board* board)
{
    if (board->chains == 1) return;

    Cell cell = get_active_cell(*board);
    int next_color = get_next_color(*board, cell.color);

    int index = -1;
    Cell new_cell = {.row = 0, .column = 0};

    for (int row = 0; row < board->rows; row++) {
        for (int column = 0; column < board->columns; column++) {
            if (board->content[row][column].color == next_color) {
                if (board->content[row][column].index > index) {
                    index = board->content[row][column].index;
                    new_cell.row = row;
                    new_cell.column = column;
                }
            }
        }
    }
    board->content[cell.row][cell.column].active = false;
    board->content[new_cell.row][new_cell.column].active = true;
}

//Savoir la prochaine couleur pour pouvoir changer de chaîne
int get_next_color(Board board, int color) {
    int colors[5] = {4, 2, 1, 5, 6};

    for (int i = 0; i < board.chains; i++) {
        if (colors[i] == color) {
            if (i == board.chains - 1) return colors[0];
            return colors[i + 1];
        }
    }
}

//Obtenir la cellule active où est placé le curseur
Cell get_active_cell(Board board) {
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

//Affichage des cellules
void print_cell(Cell cell)
{
    char c[] = "X";
    if (cell.value == -1) c[0] = ' ';
    else if (cell.value != 0) _itoa(cell.value, c, 10);

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    short default_attribute = FOREGROUND_INTENSITY | 7;
    short cell_attribute = FOREGROUND_INTENSITY | cell.color;
    if (cell.active == true) cell_attribute = cell_attribute | 7 * 16 | BACKGROUND_INTENSITY;

    SetConsoleTextAttribute(handle, cell_attribute);
    printf(c);
    SetConsoleTextAttribute(handle, default_attribute); //On remet les couleurs d'affichage par défaut après avoir affiché la cellule
}

//Effectue le déplacement et donc adapte l'état de la grille, si le déplacement est possible
bool move(Board* board, char direction)
{
    Cell cell = get_active_cell(*board);
    Position position = can_move(*board, cell, direction);

    if (position.valid) {
        board->content[cell.row][cell.column].active = false;
        board->content[position.row][position.column].active = true;
        board->content[position.row][position.column].index = cell.index + 1;
        board->content[position.row][position.column].color = cell.color;
    }

    return position.valid;
}

//Vérifie que le déplacement est possible, et retourne la cellule de destination
Position can_move(Board board, Cell cell, char direction)
{
    int row = cell.row;
    int column = cell.column;
    Position position = {.valid = false};

    switch (direction) {
    case 'N': row--; break;
    case 'S': row++; break;
    case 'E': column++; break;
    case 'W': column--; break;
    }
    if (row < 0 || row > board.rows - 1 || column < 0 || column > board.columns - 1)
        return position;

    Cell new_cell = board.content[row][column];

    if (new_cell.value < cell.value || new_cell.value == 0 || new_cell.color != 0)
        return position;

    position.row = row;
    position.column = column;
    position.valid = true;

    return position;

}

//Détermine si la partie est finie en vérifiant s'il y a encore un pion sans couleur
bool is_end_game(Board board)
{
    int color = 0;
    int value = 0;
    for (int row = 0; row < board.rows; row++) {
        for (int column = 0; column < board.columns; column++) {
            color = board.content[row][column].color;
            value = board.content[row][column].value;

            if (color == 0 && value != -1) return false;
        }
    }
    return true;
}

//Permet d'annuler un mouvement en remontant la chaîne d'une cellules
void remove_move(Board* board)
{
    Cell cell = get_active_cell(*board);
    if (cell.index > 1) {
        for (int row = 0; row < board->rows; row++) {
            for (int column = 0; column < board->columns; column++) {
                if (board->content[row][column].index == cell.index - 1) {
                    board->content[cell.row][cell.column].active = false;
                    board->content[cell.row][cell.column].index = 0;
                    board->content[cell.row][cell.column].color = 0;
                    board->content[row][column].active = true;
                    return;
                }
            }
        }
    }
}

//Permet d'annuler un mouvement en remontant la chaîne d'une cellule
void erase_chain(Board* board)
{
    Cell cell = get_active_cell(*board);

    if (cell.index > 1) {
        for (int row = 0; row < board->rows; row++) {
            for (int column = 0; column < board->columns; column++) {
                if (board->content[row][column].color == cell.color) {
                    if (board->content[row][column].index > 1) {
                        board->content[row][column].color = 0;
                        board->content[row][column].index = 0;
                        board->content[row][column].active = false;
                    }
                    else {
                        board->content[row][column].active = true;
                        return;
                    }
                }
            }
        }
    }
}

//Recréer la grille pour recommencer la partie
void restart(Board* board, int level)
{
    *board = create_board(level);
}

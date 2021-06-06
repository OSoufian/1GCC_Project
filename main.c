#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>

#include "board.h"

char get_action();
void show_actions();
bool do_action(char action);

int main()
{
    char action;

    Board board = create_board();

    do {
        show_board(board);
        show_actions();
        action = get_action();
        system("cls");
    } while (!do_action(action));

    return 0;
}

char get_action()
{
    char action;

    action = getchar();
    action = toupper(action);

    while (getchar() != '\n');

    return action;
}

void show_actions()
{
    printf("\nSelect a direction (N, S, E, W).");
    printf("\nCancel the previous move (B).");
    printf("\nErase the chain (R).");
    printf("\nRestart the level (X).");
    printf("\nSelect another chain (C)");
    printf("\nExit the game (Q)\n\n");
}

bool do_action(char action)
{
    bool quit = false;
    switch (action) {
    case 'N':
        printf("\nVous avez pris la direction du Nord\n");
        break;
    case 'E':
        printf("\nVous avez pris la direction de l'Est\n");
        break;
    case 'W':
        printf("\nVous avez pris la direction de l'Ouest\n");
        break;
    case 'S':
        printf("\nVous avez pris la direction du Sud\n");
        break;
    case 'B':
        printf("\nVous avez annule votre precedent mouvement\n");
        break;
    case 'R':
        printf("\nVous avez efface la chaine\n");
        break;
    case 'X':
        printf("\nVous avez recommence le niveau\n");
        break;
    case 'C':
        printf("\nVous avez selectionne une autre chaîne\n");
        break;
    case 'Q':
        printf("\nVous avez quitte la partie\n");
        quit = true;
        break;
    default:
        printf("\nVous n'avez pas choisi de lettre valide\n");
        break;
    }
    return quit;
}

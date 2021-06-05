#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#include "board.h"

void aaa();
void COLOR_PRINT(const char* s, int color);
char read_character();

int main()
{
    Board board = create_board();
    show_board(board);
    aaa();
    
    return 0;
}

void aaa()
{
    char choice;
    int exit = 0;

    int red = 4;
    int green = 2;
    int blue = 1;
    int pink = 5;
    int yellow = 6;

    COLOR_PRINT("ROUGE\n", red);
    COLOR_PRINT("VERT\n", green);
    COLOR_PRINT("BLEU\n", blue);
    COLOR_PRINT("ROSE\n", pink);
    COLOR_PRINT("JAUNE\n", yellow);


    while (exit == 0) {

        printf("\nSelect a direction (N, S, E, W).");
        printf("\nCancel the previous move (B).");
        printf("\nErase the chain (R).");
        printf("\nRestart the level (X).");
        printf("\nSelect another chain (C)");
        printf("\nExit the game (Q)\n\n");

        choice = read_character();

        switch (choice) {
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
            exit = 1;
            break;
        default:
            printf("\nVous n'avez pas choisi de lettre valide\n");
            break;
        }
    }
}

char read_character()
{
    char character;

    character = getchar();
    character = toupper(character);

    while (getchar() != '\n');

    return character;
}

void COLOR_PRINT(const char* s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}

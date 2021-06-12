#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

#include "board.h"
#include "utils.h"

Action get_action(char* chars);
Action get_level();
Action get_progress_actions();
Action get_end_actions();

bool do_action(Board* board, Action action, int level);

int main()
{
    int level;
    Action action;
    Board board;
    bool end_game = false;

    do {
        //Choix du niveau
        do {
            system("cls");
            action = get_level();
            if (!action.valid); //beep error
        } while (!action.valid);

        if (action.content == 'Q') return 0;

        //Création du niveau choisi
        level = action.value;
        board = create_board(level);

        //Lancement de la partie
        do {
            system("cls");
            print_board(board);
            action = get_progress_actions();

            if (!action.valid);//beep error
            else if (action.content == 'Q') return 0;
            else if (action.content == 'L') break;
            else if (do_action(&board, action, level)) {
                //Fin de partie
                do {
                    system("cls");
                    print_board(board);
                    action = get_end_actions();
                } while (!action.valid);

                if (action.content == 'Q') return 0;

                end_game = true;
                break;
            }
            if (end_game) break;
        } while (true);
    } while (true);
}

//Affichage au début afin de demander le niveau
Action get_level()
{
    printf("-- Cardinal Chains --");
    printf("\n\nSelect a level [1-30]");
    printf("\nExit the game [Q]");
    printf("\n\n>");
    return get_action("Q");
}

//Affichage des actions possibles en cours de partie
Action get_progress_actions()
{
    printf("\nSelect a direction [N, S, E, W]");
    printf("\nCancel the previous move [B]");
    printf("\nErase the chain [R]");
    printf("\nRestart the level [X]");
    printf("\nSelect another chain [C]");
    printf("\nSelect another level [L]");
    printf("\nExit the game [Q]");
    printf("\n\n>");
    return get_action("NSEWBRXCLQ");
}

//Affichage des actions, une fois la partie finie
Action get_end_actions()
{
    printf("\n\nThe game is won");
    printf("\n\nPlay new game [G]");
    printf("\nExit the game [Q]");
    printf("\n\n>");
    return get_action("GQ");
}

//Obtenir l'action rentrée par l'utilisateur
Action get_action(char* chars)
{
    char input[4];
    Action action = {.valid = false};
    Result result;

    if (read(input, 4)) { //Vérifie qu'il y ait bien une valeur dans l'input
        result = is_numeric(input);

        //Si l'input est un nombre
        if (!result.error) {
            if (result.value >= 1 && result.value <= 30) {
                action.valid = true;
                action.value = result.value;
            }
        }

        //Si l'input est une lettre
        else {
            if (strlen(input) == 1) {
                char c = toupper(input[0]);
                if (strchr(chars, c) != NULL) {
                    action.valid = true;
                    action.content = c;
                }
            }
        }
    }

    return action;
}

//Exécute les diverses fonctions selon le caractère entré par l'utilisateur
bool do_action(Board* board, Action action, int level)
{
    bool end = false;
    switch (action.content) {
    case 'N':
    case 'E':
    case 'W':
    case 'S':
        if (move(board, action.content)) {
            if (is_end_game(*board))
                end = true;
        }
        break;
    case 'B':
        remove_move(board);
        break;
    case 'R':
        erase_chain(board);
        break;
    case 'X':
        restart(board, level);
        break;
    case 'C':
        select_chain(board);
        break;
    }
    return end;
}

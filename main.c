#include <stdio.h>
#include <stdlib.h>

//structure pour la grille
struct Grid
{
    char table[50][50];

};

void grid();
void display_board(struct Grid board);

int main()
{
    grid();
    return 0;
}

//fonction qui contient les differentes configurations
void grid() {
    struct Grid tab1 = {

            {{'1', '2', '3', '4', '5'},
                    {'1', '2', '3', '4', '5'},
                    {'1', '2', '3', '4', '5'},
                    {'1', ' ', '3', '4', '5'}},


    };
    struct Grid tab2 = {

            {{'1', '2', '3', '4', '5'},
                    {'1', '2', '3', '4', '5','9','4'},
                    {'1', '2', '3', '4', '5'},
                    {'1', '3', '3', '4', '5'}},
    };

    struct Grid board[2]={tab1,tab2}; //structure qui contient les differentes configuration
    display_board(board[1]);
}

//fonction qui affiche les differentes configurations
void display_board(struct Grid board){
    int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(board.table[i][j] == 0)
            {
                board.table[i][j]= ' ';
            }
            printf("%c ", board.table[i][j]);
        }
        printf("\n");
    }
};
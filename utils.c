#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "utils.h"

//V�rifie si l'input entr� par l'utilisateur est un nombre ou pas
Result is_numeric(const char* s)
{
    Result result = { .error = true };

    if (s == NULL || *s == '\0' || isspace(*s))
        return result;
    char* p;
    result.value = (int)strtod(s, &p);
    result.error = (*p != '\0');
    return result;
}

//Vide le buffer afin d'�viter que le retour � la ligne y soit stock�
void clear_buffer()
{
    int c = 0;
    while (c != '\n' && c != EOF) c = getchar();
}

//Analyse ce qu'a entr� l'utilisateur
bool read(char* s, int lenght)
{
    char* start = NULL;

    if (fgets(s, lenght, stdin) != NULL) {
        start = strchr(s, '\n');
        if (start != NULL)  *start = '\0'; //Si l'utilisateur a entr� une commande de la bonne taille cela supprime le retour � la ligne
        else clear_buffer(); //Sinon on r�cup�re les premiers caract�res et on clear le buffer pour pas stocker le reste
        return true;
        //Si aucun input a �t� r�cup�r� 
    }
    else {
        clear_buffer();
        return false;
    }
}
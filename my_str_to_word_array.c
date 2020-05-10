/*
** EPITECH PROJECT, 2019
** str_toward_array
** File description:
** lll JÖKER lll
*/

#include "my.h"

int nb_line(char const *str)
{
    int i = 0;
    int line = 0;

    while (str[i] != '\0'){
        if (str[i] == '\n')
            line++;
        i++;
    }
    return (line + 1);
}

int nb_char(char const *str, int i)
{
    while (str[i] != '\n' && str[i] != '\0'){
        i++;
    }
    return (i + 1);
}

char **my_str_to_word_array(char const *str, pos_t *pos)
{
    int line = nb_line(str);
    int len = 0;
    int i = 0;
    char **tab;

    if ((tab = malloc(sizeof(char *) * (line + 1))) == NULL)
        return (NULL);
    pos->x = 0;
    pos->y = 0;
    while (pos->y != line){
        len = nb_char(str, i);
        if ((tab[pos->y] = malloc(sizeof(char) * (len + 1))) == NULL)
            return (NULL);
        while (str[i] != '\n' && str[i] != '\0'){
            tab[pos->y][pos->x] = str[i];
            pos->x++;
            i++;
        }
        i++;
        tab[pos->y][pos->x] = '\0';
        pos->x = 0;
        pos->y++;
    }
    pos->y = 0;
    return (tab);
}
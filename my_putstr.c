/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** lll JÖKER lll
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
        my_putchar(str[i++]);
    return (0);
}

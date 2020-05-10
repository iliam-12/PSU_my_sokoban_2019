/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** error
*/

#include "my.h"

int error(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h'){
        law_of_sokoban();
        return (0);
    }
    return (0);
}
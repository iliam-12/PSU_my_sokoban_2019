/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** lll JÖKER lll
*/

#include "my.h"

int count_pxoh(char **tab, var_t *var, pos_t *pos)
{
    if (var->pass == 1){
        if (var->big_p == 1 && var->big_x == var->big_o && var->big_h > 11)
            movement(tab, pos);
        else {
            my_putstr("Incorrect map");
            return (84);
        }
    }
    if (tab[pos->y][pos->x] == 'P' && var->pass != 1)
        var->big_p++;
    if (tab[pos->y][pos->x] == 'X' && var->pass != 1)
        var->big_x++;
    if (tab[pos->y][pos->x] == 'O' && var->pass != 1)
        var->big_o++;
    if (tab[pos->y][pos->x] == '#' && var->pass != 1)
        var->big_h++;
    return (0);
}

void check_error(char **tab, var_t *var, pos_t *pos)
{
    pos->x = 0;
    pos->y = 0;
    var->pass = 0;

    while (tab[pos->y]){
        while (tab[pos->y][pos->x] != '\0'){
            count_pxoh(tab, var, pos);
            pos->x++;
        }
        pos->x = 0;
        pos->y++;
    }
    var->pass = 1;
    count_pxoh(tab, var, pos);
}

void law_of_sokoban(void)
{
    my_putstr("*** Règle du Jeu :\n\nDéplace toi à l'aide des flèches ");
    my_putstr("afin de positionner chaque X sur chaque O.\n\n");
    my_putstr("P : correspond à ton personnage\n");
    my_putstr("X : correspond aux caisses\n");
    my_putstr("O : correspond aux trous des caisses\n");
    my_putstr("\nA toi de jouer !\n\n");
    my_putstr("/!");
    my_putchar(92);
    my_putstr(" press 'space' for restart and 'q' for leaving\n");
    my_putstr("/!");
    my_putchar(92);
    my_putstr(" if map is too big, you would modify dimensions of your");
    my_putstr(" terminal\n");
}
/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** key_command1
*/

#include "my.h"

void key_up1(char **tab, pos_t *pos)
{
    mvaddch(pos->y, pos->x, ' ');
    tab[pos->y][pos->x] = ' ';
    mvaddch(pos->y - 1, pos->x, 'P');
    tab[pos->y - 1][pos->x] = 'P';
    mvaddch(pos->y - 2, pos->x, 'X');
    tab[pos->y - 2][pos->x] = 'X';
    pos->y--;
}

void key_down1(char **tab, pos_t *pos)
{
    mvaddch(pos->y, pos->x, ' ');
    tab[pos->y][pos->x] = ' ';
    mvaddch(pos->y + 1, pos->x, 'P');
    tab[pos->y + 1][pos->x] = 'P';
    mvaddch(pos->y + 2, pos->x, 'X');
    tab[pos->y + 2][pos->x] = 'X';
    pos->y++;
}

void key_right1(char **tab, pos_t *pos)
{
    mvaddch(pos->y, pos->x, ' ');
    tab[pos->y][pos->x] = ' ';
    mvaddch(pos->y, pos->x + 1, 'P');
    tab[pos->y][pos->x + 1] = 'P';
    mvaddch(pos->y, pos->x + 2, 'X');
    tab[pos->y][pos->x + 2] = 'X';
    pos->x++;
}

void key_left1(char **tab, pos_t *pos)
{
    mvaddch(pos->y, pos->x, ' ');
    tab[pos->y][pos->x] = ' ';
    mvaddch(pos->y, pos->x - 1, 'P');
    tab[pos->y][pos->x - 1] = 'P';
    mvaddch(pos->y, pos->x - 2, 'X');
    tab[pos->y][pos->x - 2] = 'X';
    pos->x--;
}
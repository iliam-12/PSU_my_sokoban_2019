/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** lll JÖKER lll
*/

#include "my.h"

void key_up(char **tab, pos_t *pos)
{
    if (tab[pos->y - 1][pos->x] == '#'){
        mvaddch(pos->y, pos->x, 'P');
        return;
    }
    if (tab[pos->y - 1][pos->x] == 'X'){
        if (tab[pos->y - 2][pos->x] == '#' || tab[pos->y - 2][pos->x] == 'X'){
            mvaddch(pos->y, pos->x, 'P');
            return;
        }
        else
            key_up1(tab, pos);
    }
    else {
        mvaddch(pos->y, pos->x, ' ');
        mvaddch(pos->y - 1, pos->x, 'P');
        pos->y--;
    }
}

void key_down(char **tab, pos_t *pos)
{
    if (tab[pos->y + 1][pos->x] == '#'){
        mvaddch(pos->y, pos->x, 'P');
        return;
    }
    if (tab[pos->y + 1][pos->x] == 'X'){
        if (tab[pos->y + 2][pos->x] == '#' || tab[pos->y + 2][pos->x] == 'X'){
            mvaddch(pos->y, pos->x, 'P');
            return;
        }
        else
            key_down1(tab, pos);
    }
    else {
        mvaddch(pos->y, pos->x, ' ');
        mvaddch(pos->y + 1, pos->x, 'P');
        pos->y++;
    }
}

void key_right(char **tab, pos_t *pos)
{
    if (tab[pos->y][pos->x + 1] == '#'){
        mvaddch(pos->y, pos->x, 'P');
        return;
    }
    if (tab[pos->y][pos->x + 1] == 'X'){
        if (tab[pos->y][pos->x + 2] == '#' || tab[pos->y][pos->x + 2] == 'X'){
            mvaddch(pos->y, pos->x, 'P');
            return;
        }
        else
            key_right1(tab, pos);
    }
    else {
        mvaddch(pos->y, pos->x, ' ');
        mvaddch(pos->y, pos->x + 1, 'P');
        pos->x++;
    }
}

void key_left(char **tab, pos_t *pos)
{
    if (tab[pos->y][pos->x - 1] == '#'){
        mvaddch(pos->y, pos->x, 'P');
        return;
    }
    if (tab[pos->y][pos->x - 1] == 'X'){
        if (tab[pos->y][pos->x - 2] == '#' || tab[pos->y][pos->x - 2] == 'X'){
            mvaddch(pos->y, pos->x, 'P');
            return;
        }
        else
            key_left1(tab, pos);
    }
    else {
        mvaddch(pos->y, pos->x, ' ');
        mvaddch(pos->y, pos->x - 1, 'P');
        pos->x--;
    }
}

void all_if_key(char **tab, pos_t *pos, int key)
{
    if (key == KEY_UP)
        key_up(tab, pos);
    if (key == KEY_DOWN)
        key_down(tab, pos);
    if (key == KEY_RIGHT)
        key_right(tab, pos);
    if (key == KEY_LEFT)
        key_left(tab, pos);
}

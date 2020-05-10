/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** lll JÖKER lll
*/

#ifndef MY_H_
#define MY_H_

/* _______ INCLUDES _______ */

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* ______ STRUCT ______ */

struct pos
{
    int x;
    int y;
}; typedef struct pos pos_t;

struct var
{
    int big_p;
    int big_x;
    int big_o;
    int big_h;
    int pass;
}; typedef struct var var_t;

/* _____ FONCTIONS _____ */

int main(int ac, char **av);
void check_error(char **tab, var_t *var, pos_t *pos);
int count_pxoh(char **tab, var_t *var, pos_t *pos);
char **my_str_to_word_array(char const *str, pos_t *pos);
int nb_char(char const *str, int i);
int nb_line(char const *str);
void movement(char **tab, pos_t *pos);
char **print_tab(char **tab);
void my_position(char **tab, pos_t *pos);
void key_move(char **tab, pos_t *pos);
void all_if_key(char **tab, pos_t *pos, int key);
int my_putstr(char const *str);
void my_putchar(char c);
void law_of_sokoban(void);
void key_up(char **tab, pos_t *pos);
void key_down(char **tab, pos_t *pos);
void key_right(char **tab, pos_t *pos);
void key_left(char **tab, pos_t *pos);
void key_up1(char **tab, pos_t *pos);
void key_down1(char **tab, pos_t *pos);
void key_right1(char **tab, pos_t *pos);
void key_left1(char **tab, pos_t *pos);
int error(int ac, char **av);

#endif /* !MY_H_ */
/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** lll JÖKER lll
*/

#include "my.h"
#define PLAYER 'P'
#define SPACE ' '
#define hashtag '#'
#define QUIT 'q'

char **print_tab(char **tab)
{
    int y = 0;
    int z = 0;

    while (tab[y]){
        y++;
    }
    if (y > LINES)
        printw("resize");
    if (y < LINES){
        while (tab[z]){
            printw(tab[z]);
            printw("\n");
            z++;
        }
    }
    return (tab);
}

void my_position(char **tab, pos_t *pos)
{
    pos->y = 1;
    pos->x = 1;

    while (tab[pos->y]){
        while (tab[pos->y][pos->x] != '\0'){
            if (tab[pos->y][pos->x] == 'P')
                return;
            pos->x++;
        }
        pos->x = 0;
        pos->y++;
    }
}

void key_move(char **tab, pos_t *pos)
{
    int key;

    print_tab(tab);
    my_position(tab, pos);
    while (key != QUIT){
        key = getch();
        move(pos->y, pos->x);
        mvaddch(pos->y, pos->x, ' ');
        all_if_key(tab, pos, key);
    }
    return;
}

void movement(char **tab, pos_t *pos)
{
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    key_move(tab, pos);
    endwin();
}

int main(int ac, char **av)
{
    char *buff;
    char **tab;
    int fd = open(av[1], O_RDONLY);
    int size_map;
    struct stat fileStat;
    var_t *var = malloc(sizeof(var_t));
    pos_t *pos = malloc(sizeof(pos_t));

    error(ac, av);
    if (fd == -1)
        return (84);
    if (stat(av[1], &fileStat) == -1)
        return (84);
    size_map = fileStat.st_size;
    buff = malloc(sizeof(char) * size_map + 1);
    read(fd, buff, size_map);
    tab = my_str_to_word_array(buff, pos);
    check_error(tab, var, pos);
    close(fd);
}
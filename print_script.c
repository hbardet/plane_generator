/*
** EPITECH PROJECT, 2022
** plane_generator
** File description:
** print_script
*/

#include "radar.h"

void print_script_to_screen(FILE *fd, WINDOW *win, int index)
{
    WINDOW *script_win = newwin(getmaxy(win) - 10 , 42, 5 , getmaxx(win) - 47);
    int win_max_y = getmaxy(script_win);
    char * line = NULL;
    FILE *fp = fopen("script", "r");
    wclear(script_win);
    size_t len = 0;
    ssize_t read;
    for (int i = 0; i < win_max_y - 4; i++){
        wmove(script_win, 2 + i, 5);
        read = getline(&line, &len, fp);
        if (read == -1)
            break;
        wprintw(script_win,"%d. %s",i, line);
        wrefresh(script_win);
    }
    box(script_win, 0, 0);
    wrefresh(script_win);
    wrefresh(script_win);
}
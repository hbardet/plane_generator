/*
** EPITECH PROJECT, 2022
** radar_gene
** File description:
** radar
*/

#include <menu.h>
#include <ncurses.h>
#include <menu.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define CTRLD 	4

#ifndef RADAR_H_
#define RADAR_H_

typedef struct plane_data{
    int start_x;
    int start_y;

    int end_x;
    int end_y;

    int speed;

    int delay;
}plane_data_t;

typedef struct tower_data{
    int cordo_x;
    int cordo_y;

    int size;
}tower_data_t;
int main_menu(WINDOW *win, FILE *fd);
plane_data_t random_plane(void);
tower_data_t random_tower(void);
int menu_stress(WINDOW *win, FILE *fd);
int menu_moulie(WINDOW *win, FILE *fd);
void print_script_to_screen(FILE *fd, WINDOW *script_win, int index);

#endif /* !RADAR_H_ */

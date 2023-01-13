/*
** EPITECH PROJECT, 2022
** plane_generator
** File description:
** menu_plane
*/

#include "radar.h"

int menu_moulie(WINDOW *win, FILE *fd)
{
    WINDOW *win_mouli = newwin(10, 70, getmaxy(win) - 15 , 5);
    box(win_mouli, 0, 0);
    plane_data_t plane;
    tower_data_t tower;
    int max_plane = 3000;
    int max_tower = 3;
    int max_total = max_plane + max_tower;
    for (int i = 0; i != max_total; i++){
        wmove(win_mouli, 6, 4 +(i * 62) / max_total);
        wprintw(win_mouli,"#");

        if (i < max_plane){
            plane = random_plane();
            fprintf(fd,"A %d %d  %d %d  %d %d\n", plane.start_x, plane.start_y, plane.end_x, plane.end_y, plane.speed, plane.delay);
        } else {
            tower = random_tower();
            fprintf(fd,"T %d %d  %d\n", tower.cordo_x, tower.cordo_y, tower.size);
        }
        wrefresh(win_mouli);
    }
    return (0);
}

int menu_stress(WINDOW *win, FILE *fd)
{
    WINDOW *win_mouli = newwin(10, 70, getmaxy(win) - 15 , 5);
    box(win_mouli, 0, 0);
    plane_data_t plane;
    tower_data_t tower;
    int max_plane = 42000;
    int max_tower = 42;
    int max_total = max_plane + max_tower;
    for (int i = 0; i != max_total; i++){
        wmove(win_mouli, 6, 4 +(i * 62) / max_total);
        wprintw(win_mouli,"#");

        if (i < max_plane){
            plane = random_plane();
            fprintf(fd,"A %d %d  %d %d  %d %d\n", plane.start_x, plane.start_y, plane.end_x, plane.end_y, plane.speed, plane.delay);
        } else {
            tower = random_tower();
            fprintf(fd,"T %d %d  %d\n", tower.cordo_x, tower.cordo_y, tower.size);
        }
        wrefresh(win_mouli);
    }
    return (0);
}
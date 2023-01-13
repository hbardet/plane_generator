/*
** EPITECH PROJECT, 2022
** plane_generator
** File description:
** main
*/

#include "radar.h"

int main(void)
{
   srand(time(NULL));
   FILE *fd = fopen("script", "w+");
   WINDOW *win = initscr();
   main_menu(win, fd);
    
}
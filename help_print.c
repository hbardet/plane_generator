/*
** EPITECH PROJECT, 2022
** B-PSU-100-MLH-1-1-sokoban-hugo.bardet
** File description:
** help_print
*/

#include "radar.h"

int print_help(char *check)
{
    if (strcmp(check, "-h") == 0){
        printf("USAGE\n");
        printf("\t./plane_gene nb_plane nb_tower\n");
        printf("DESCRIPTION\n");
        printf("generate a script with n plane place random coordinate which go to random coordinate\n");
        exit(0);
    } else
        return (0);
}

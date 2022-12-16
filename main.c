/*
** EPITECH PROJECT, 2022
** radar_gene
** File description:
** main
*/
#include "radar.h"


int main(int ac, char **av)
{
    srand(time(NULL));
    int nb_plane = atoi(av[1]);
    int nb_tower = atoi(av[2]);
    FILE * fd = fopen("ujo_tro_for_pour_fer_de_generator", "w");
    for (int i = 0; i < nb_plane; i++)
        fprintf(fd,"A %d %d  %d %d  %d  0\n", rand() % 1920, rand() % 1080, rand() % 1920, rand() % 1080, 1 + rand() % (5+1 - 1));
    for (int i = 0; i < nb_tower; i++)
        fprintf(fd,"T %d %d  %d\n", rand() % 1920, rand() % 1080, rand() % 25);
    return (0);
}
/*
** EPITECH PROJECT, 2022
** plane_generator
** File description:
** generate_rdm_cordo
*/

#include "radar.h"

plane_data_t random_plane(void)
{
    plane_data_t new_plane;
    new_plane.delay = 0;
    new_plane.speed = 1;

    new_plane.start_x = rand() % 1920;
    new_plane.start_y = rand() % 1080;
    
    new_plane.end_x = rand() % 1920;
    new_plane.end_y = rand() % 1080;
    return (new_plane);
}

tower_data_t random_tower(void)
{
    tower_data_t new_tower;
    new_tower.cordo_x = rand() % 1920;
    new_tower.cordo_y = rand() % 1080;

    new_tower.size = 5 + rand() % (20 + 1 - 5);
    return (new_tower);
}
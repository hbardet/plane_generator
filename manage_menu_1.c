/*
** EPITECH PROJECT, 2022
** plane_generator
** File description:
** manage_menu_1
*/

#include "radar.h"

int go_to_other(ITEM *current, WINDOW *win, FILE *fd)
{
    switch (current->index){
    case 0: return (0); break;
    case 1: menu_moulie(win, fd); return (0); break;
    case 2: menu_stress(win, fd); return (0); break;
    case 3: return (1); break;
    default: return (0);break;
    }
}

int main_menu(WINDOW *win, FILE *fd)
{
    ITEM **items_menu;
    MENU *menu_selection;
    WINDOW *menu_win = newwin(10, 70, 5, 5);
    int key;
    int stop = 0;
    start_color();
    cbreak();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    init_pair(1, COLOR_RED, COLOR_BLACK);
    
    char *item_str[] = {"CUSTOM SCRIPT", "MOULIE TEST", "STRESS TEST", "EXIT", (char *)NULL,};

    int n_item = ARRAY_SIZE(item_str);

    items_menu = (ITEM **)calloc(n_item, sizeof(ITEM *));
    items_menu[0] = new_item("CUSTOM SCRIPT", "create a custom script");
    items_menu[1] = new_item("MOULIE TEST", "test max of the moulie (3000 plane, 3 tower)");
    items_menu[2] = new_item("STRESS TEST", "big test for ur computer (42000 plane, 42 tower)");
    items_menu[3] = new_item("EXIT", "exit the programm");

    menu_selection = new_menu((ITEM **)items_menu);

    keypad(menu_win, TRUE);
    
    set_menu_win(menu_selection, menu_win);
    set_menu_sub(menu_selection, derwin(menu_win, 6, 68, 3, 1));

    set_menu_mark(menu_selection, " => ");

    box(menu_win, 0, 0);

    post_menu(menu_selection);
	wrefresh(menu_win);
    while (!stop && (key = wgetch(menu_win)) != KEY_F(1)){
        print_script_to_screen(fd, win, 0);
        switch(key){
            case KEY_DOWN:
				menu_driver(menu_selection, REQ_DOWN_ITEM);
				break;
			case KEY_UP:
				menu_driver(menu_selection, REQ_UP_ITEM);
				break;
            case 10:
                stop = go_to_other(current_item(menu_selection), win, fd);
                break;
		}

        wrefresh(menu_win);
	}
    fclose(fd);
    unpost_menu(menu_selection);
    free_menu(menu_selection);
    for (int i = 0; i < n_item; ++i){
        free_item(items_menu[i]);
    }
	endwin();
    return (0);
}
##
## EPITECH PROJECT, 2022
## info_file
## File description:
## makefile for the cat dunction
##

SRC		=	help_print.c\
			main.c\
			manage_menu_1.c\
			menu_plane.c\
			print_middle.c\
			print_script.c\
			generate_rdm_cordo.c\

OBJ 	= 	$(SRC:.c=.o)

NAME	= 	plane_gene

CFLAGS +=	-Wall -I./include -g -lncurses -lmenu -lform -lpanel

CRIFLAGS += 	--coverage -lcriterion

PATHUNIT = ./tests/unit_tests

all : 
	make $(NAME)

$(NAME): $(OBJ)
	 gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -rf vgcore.*

fclean:	clean
	rm -rf $(NAME)

.PHONY: all clean fclean re

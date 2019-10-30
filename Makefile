##
## EPITECH PROJECT, 2018
## 105torus
## File description:
## makefile
##

CC	= gcc -g

RM	= rm -f

NAME	= 105_torus

SRC	=   torus.c

OBJ	= $(addprefix src/,$(SRC:.c=.o))

CFLAGS	= -W -Wextra -Wall -I include/

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = main.c input.c close.c render.c player.c

OBJ :=$(SRC:.c=.o)

NAME = shooter

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) minilibx/libmlx.a -lX11 -lXext -lm

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
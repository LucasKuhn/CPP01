NAME		:= zombies
SRC_DIR		:=	./
FILES		:= main Zombie ZombieHorde
SRC_FILES	:= $(addsuffix .cpp, $(FILES))
OBJ_DIR		:= objs
OBJS		:= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
RM			:= rm -rf
SHELL		:= /bin/bash

all:	$(NAME)

run:	all
	./$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	$(RM) $(OBJ_DIR)

fclean:				clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

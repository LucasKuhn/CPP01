type		:= humans
SRC_DIR		:=	./
FILES		:= main Weapon HumanA HumanB
SRC_FILES	:= $(addsuffix .cpp, $(FILES))
OBJ_DIR		:= objs
OBJS		:= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
RM			:= rm -rf
SHELL		:= /bin/bash

all:	$(type)

run:	all
	./$(type)

$(type):	$(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	$(RM) $(OBJ_DIR)

fclean:				clean
	$(RM) $(type)

re:	fclean all

.PHONY:	all clean fclean re

NAME		:= sed
SRC_DIR		:=	./
FILES		:= main Sed
SRC_FILES	:= $(addsuffix .cpp, $(FILES))
OBJ_DIR		:= objs
OBJS		:= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
RM			:= rm -rf
SHELL		:= /bin/bash

all:	$(NAME)

run:	all
	$(RM) infile.replace
	@echo "HELLO WORLD" > infile
	@echo infile:
	@cat infile
	./$(NAME) infile "WORLD" "🌎"
	@echo infile.replace:
	@cat infile.replace

$(NAME):	$(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	$(RM) $(OBJ_DIR)
	$(RM) infile
	$(RM) infile.replace

fclean:				clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

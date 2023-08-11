SRCS = main.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++11
CC = g++
NAME = project

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME) -lncurses
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
SRCS = main.cpp
FLAGS = -Wall -Wextra -Werror -g
CC = c++
NAME = project

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) -lncurses $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
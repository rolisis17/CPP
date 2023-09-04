SRCS = main.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++11
CC = g++
NAME = project

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME) -I/usr/local/SFML-2.6.0/include -L/usr/local/SFML-2.6.0/lib -lsfml-window -lsfml-system
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
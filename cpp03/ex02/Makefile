SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = FragTrap

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
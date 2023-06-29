SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = atk

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
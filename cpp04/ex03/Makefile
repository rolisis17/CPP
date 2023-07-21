SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = game

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
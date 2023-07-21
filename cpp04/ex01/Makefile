SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = Brain

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
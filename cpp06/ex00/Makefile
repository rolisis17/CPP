SRCS = main.cpp ScalarConverter.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = convert

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@rm -rf *_shrubbery
	@echo "Undone!"

re: clean all
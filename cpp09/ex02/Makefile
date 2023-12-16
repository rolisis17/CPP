SRCS = main.cpp PmergeMe.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = PmergeMe

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@echo "Unne!"

fclean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: fclean all
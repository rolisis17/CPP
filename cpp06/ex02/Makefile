SRCS = main.cpp Base.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = identify

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
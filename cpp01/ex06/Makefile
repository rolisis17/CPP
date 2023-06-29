SRCS = main.cpp Harl.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = harlFilter

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
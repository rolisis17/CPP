SRCS = main.cpp Span.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = Span

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
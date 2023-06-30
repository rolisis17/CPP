SRCS = megaphone.cpp
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -g
CPP = -std=c++98

all: $(NAME)

$(NAME):
	c++ $(FLAGS) $(CPP) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:clean

re: fclean all
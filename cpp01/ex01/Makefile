SRCS = Zombie.cpp zombieHorde.cpp main.cpp
NAME = zombie
FLAGS = -Wall -Wextra -Werror -g
CPP = -std=c++98

all: $(NAME)
#-o $(NOME)

$(NAME): $(SRCS)
	@c++ $(FLAGS) $(CPP) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

fclean: clean

re: fclean all
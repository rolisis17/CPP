SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
NAME = zombie
FLAGS = -Wall -Wextra -Werror -g
CPP = -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@c++ $(FLAGS) $(CPP) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

fclean: clean

re: fclean all
SRCS = main.cpp Warlock.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp ASpell.cpp \
Fireball.cpp BrickWall.cpp SpellBook.cpp TargetGenerator.cpp \
Polymorph.cpp
FLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
NAME = test

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean:
	@rm -rf $(NAME)
	@echo "Undone!"

re: clean all
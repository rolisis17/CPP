SRCS = ex01.cpp
NAME = phone
FLAGS = -Wall -Wextra -Werror -g
CPP = -std=c++98

all: $(NOME)
	c++ $(FLAGS) $(CPP) $(SRCS) 
#-o $(NOME)

clean:
	rm -rf $(NOME)

fclean:

re: fclean all
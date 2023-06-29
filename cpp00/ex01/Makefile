SRCS = ex01.cpp PhoneBook.cpp Contact.cpp
NAME = phone
FLAGS = -Wall -Wextra -Werror -g
CPP = -std=c++98

all: $(NAME)
#-o $(NOME)

$(NAME): $(SRCS)
	c++ $(FLAGS) $(CPP) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:

re: fclean all
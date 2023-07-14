SRCS = Account.cpp tests.cpp
LOG = .log
LOGFILE = $(addprefix $(TIMESTAMP), $(LOG))
NAME = temp 
FLAGS = -Wall -Wextra -Werror -g
CPP = -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@c++ $(FLAGS) $(CPP) $(SRCS) -o $(NAME)
	@$(eval TIMESTAMP := $(shell date +'%Y%m%d_%H%M%S'))
	@./$(NAME) > $(LOGFILE)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf 2*$(LOG)

re: fclean all
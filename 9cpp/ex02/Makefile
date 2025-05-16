NAME=PmergeMe
CFLAG=-Wall -Wextra -Werror -g3 -fsanitize=address

SRCS=main.cpp \
	PmergeMe.cpp

OBJ=$(SRCS:.cpp=.o)

ifdef t
	CFLAG += -DMYFLAG=$(t)
	FCLEAN = 1
endif

f:
ifeq ($(FCLEAN), 1)
	@$(MAKE) fclean --no-print-directory
endif
	@$(MAKE) all --no-print-directory

all: $(NAME)
ifeq ($(FCLEAN), 1)
# @$(MAKE) r --no-print-directory
endif

%.o: %.cpp
	@c++ $(CFLAG) -std=c++98 -c $< -o $@

$(NAME): $(OBJ)
	@c++ $(CFLAG) -std=c++98 -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

r: $(NAME)
	@./$(NAME)

v: $(NAME)
	@valgrind --leak-check=full --track-origins=yes ./$(NAME)

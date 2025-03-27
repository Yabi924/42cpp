NAME=Fight
CFLAG=-Wall -Wextra -Werror -g3 -fsanitize=address
SRCS=main.cpp \
	ClapTrap.cpp \

OBJ=$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	c++ $(CFLAG) -std=c++98 -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CFLAG) -std=c++98 -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

r: $(NAME)
	./$(NAME)
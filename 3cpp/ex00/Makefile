NAME=Fight
CFLAG=-Wall -Wextra -Werror
SRCS=main.cpp \
	ClapTrap.c \

OBJ=$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	g++ $(CFLAG) --std=c++98 -c $< -o $@

$(NAME): $(OBJ)
	g++ $(CFLAG) --std=c++98 -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
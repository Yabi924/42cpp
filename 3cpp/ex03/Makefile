NAME=Fight
CFLAG=-Wall -Wextra -Werror
SRCS=main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FlagTrap.cpp \
	DiamondTrap.cpp \

OBJ=$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	c++ $(CFLAG) --std=c++98 -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CFLAG) --std=c++98 -o $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
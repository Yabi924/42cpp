NAME=RPG
CFLAG=-Wall -Wextra -Werror -g3 -fsanitize=address

SRCS=main.cpp \
	Ice.cpp \
	Fire.cpp \
	Water.cpp \
	Cure.cpp \
	AMateria.cpp \
	IMateriaSource.cpp \
	MateriaSource.cpp \
	ICharacter.cpp \
	Character.cpp

OBJ=$(SRCS:.cpp=.o)

all: $(NAME)

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
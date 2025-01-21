CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
NAME = MyPhoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

NAME=identify
CFLAG=-Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98

SRCS=main.cpp \

OBJ=$(SRCS:.cpp=.o)

ifdef t
	CFLAG += -DMYFLAG=$(t)
	FCLEAN = 1
endif

flag:
ifeq ($(FCLEAN), 1)
	@$(MAKE) fclean --no-print-directory
endif
	@$(MAKE) all --no-print-directory

all: $(NAME)
ifeq ($(FCLEAN), 1)
	@$(MAKE) r --no-print-directory
endif

%.o: %.cpp
	@c++ $(CFLAG)  -c $< -o $@

$(NAME): $(OBJ)
	@c++ $(CFLAG) -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

r: $(NAME)
	@./$(NAME)

all:
	c++ -pedantic -Wall -Wextra -Werror --std=c++98 -o Harl *.cpp

clean:
	rm -rf Harl

r:
	valgrind --tool=memcheck ./Harl
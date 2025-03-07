all:
	c++ -pedantic -Wall -Wextra -Werror --std=c++98 -o replace *.cpp

clean:
	rm -rf replace

r:
	valgrind --tool=memcheck ./replace
all:
	c++ -pedantic -Wall -Wextra -Werror --std=c++98 -o fight *.cpp

clean:
	rm -rf fight

r:
	valgrind --tool=memcheck ./fight
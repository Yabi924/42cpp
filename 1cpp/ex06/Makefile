all:
	c++ -pedantic -Wall -Wextra -Werror --std=c++98 -o harlFilter *.cpp

clean:
	rm -rf harlFilter

r:
	valgrind --tool=memcheck ./harlFilter
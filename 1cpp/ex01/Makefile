all:
	c++ -Wall -Wextra -Werror --std=c++98 *.cpp -o Zombie

clean:
	rm -rf Zombie

r:
	valgrind --tool=memcheck ./Zombie
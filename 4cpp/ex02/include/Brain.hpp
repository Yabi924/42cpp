#ifndef BRIAN_HPP
# define BRIAN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
    const std::string idea[100];

public:
    Brain();
    Brain(const Brain &other);
    ~Brain();

    Brain &operator=(const Brain &other);
};

#endif
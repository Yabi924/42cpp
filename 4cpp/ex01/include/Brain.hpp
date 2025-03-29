#ifndef BRIAN_HPP
# define BRIAN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
    std::string idea[100];

public:
    Brain();
    Brain(const Brain &other);
    ~Brain();

    Brain &operator=(const Brain &other);

    const std::string &getIdea(int i) const;
    void setIdea(int i, std::string set);
};

#endif
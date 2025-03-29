#include "include/Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        idea[i] = "oiiaio";
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->idea[i] = other.idea[i];
    return (*this);
}

void Brain::setIdea(int i, std::string set)
{
    this->idea[i] = set;
}

const std::string &Brain::getIdea(int i) const
{
    return (this->idea[i]);
}
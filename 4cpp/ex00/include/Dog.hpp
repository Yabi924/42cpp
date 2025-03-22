#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
    Dog();
    Dog(const Dog &other);
    Dog(const std::string &_type);
    ~Dog();

    Dog &operator=(const Dog &other);

    void makeSound(void);
};

#endif
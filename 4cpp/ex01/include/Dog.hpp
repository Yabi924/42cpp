#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{

private:
        Brain *BrainPower;

public:
    Dog();
    Dog(const Dog &other);
    Dog(const std::string &_type);
    ~Dog();

    Dog &operator=(const Dog &other);

    void makeSound(void) const;
};

#endif
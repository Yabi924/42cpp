#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain *BrainPower;

public:
    Cat();
    Cat(const Cat &other);
    Cat(const std::string &_type);
    ~Cat();

    Cat &operator=(const Cat &other);

    void makeSound(void) const;
    void setBrain(int i, std::string set);
    const std::string &getBrain(int i) const;
};

#endif
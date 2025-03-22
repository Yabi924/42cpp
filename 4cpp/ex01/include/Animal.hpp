#ifndef WANIMAL_HPP
# define WANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &other);
    Animal(const std::string &_type);
    virtual ~Animal();

    Animal &operator=(const Animal &other);

    virtual void makeSound(void) const;
};

#endif
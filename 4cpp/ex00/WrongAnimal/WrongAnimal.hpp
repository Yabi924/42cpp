#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal(const std::string &_type);
    ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &other);

    void makeSound(void);
};

#endif
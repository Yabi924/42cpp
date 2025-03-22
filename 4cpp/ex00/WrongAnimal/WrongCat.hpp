#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat(const std::string &_type);
    ~WrongCat();

    WrongCat &operator=(const WrongCat &other);

    void makeSound(void) const;
};

#endif
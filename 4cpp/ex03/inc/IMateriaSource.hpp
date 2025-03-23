#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "rpg.hpp"

class IMateriaSource
{
private:
    AMateria *Source[100];
    unsigned int qty;

public:
    virtual ~IMateriaSource();

    virtual void learnMateria(AMateria *skill) = 0;
    virtual AMateria *createMateria(const std::string &type) = 0;

};


#endif
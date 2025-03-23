#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
protected:
    AMateria *Source[100];
    int qty;

public:
    IMateriaSource();
    virtual ~IMateriaSource();

    virtual void learnMateria(AMateria *skill) = 0;
    virtual AMateria *createMateria(const std::string &type) = 0;

};


#endif
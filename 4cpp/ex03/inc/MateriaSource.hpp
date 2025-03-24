#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *Source[100];
    int qty;

public:
    MateriaSource();
    ~MateriaSource();

    void learnMateria(AMateria *skill);
    AMateria *createMateria(const std::string &type);
};

#endif
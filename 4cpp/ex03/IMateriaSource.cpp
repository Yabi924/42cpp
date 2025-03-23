#include "inc/IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
    while (--qty)
        delete Source[qty];
}

void IMateriaSource::learnMateria(AMateria *skill)
{
    if (qty != 100)
        this->Source[this->qty++] = skill;
}

AMateria *IMateriaSource::createMateria(const std::string &type)
{
    int i = -1;

    while (++i < this->qty)
        if (Source[i]->getType() == type)
            return (Source[i]->clone());
    std::cout << "ImateriaSource: can't find the Materia" << std::endl;
    return (NULL);
}

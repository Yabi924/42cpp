#include "inc/MateriaSource.hpp"

MateriaSource::MateriaSource():IMateriaSource()
{
    qty = 0;
    for (int i = 0; i < 100; i++)
        Source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < qty; i++)
        delete Source[i];
}

void MateriaSource::learnMateria(AMateria *skill)
{
    if (qty != 100)
        this->Source[this->qty++] = skill;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    int i = -1;

    while (++i < this->qty)
        if (Source[i]->getType() == type)
            return (Source[i]->clone());
    std::cout << "MateriaSource: can't find the Materia" << std::endl;
    return (NULL);
}

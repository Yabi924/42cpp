#include "inc/rpg.hpp"

int main(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "a" << std::endl;
    ICharacter *jack = new Character(*me);

    jack->use(1, *me);

    delete jack;
    delete bob;
    delete me;
    delete src;

    return (0);
}
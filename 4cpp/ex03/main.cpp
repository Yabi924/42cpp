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

    // //test use()
    // {
    //     std::cout << "========use========\n";
    //     ICharacter *bob = new Character("bob");

    //     me->use(0, *bob);
    //     me->use(1, *bob);
    //     delete bob;
    //     std::cout << "===================\n";
    // }

    // //Character copy constructor
    // {
    //     std::cout << "========copy constructor========\n";
    //     ICharacter *jack = new Character(*me);

    //     jack->use(1, *me);
    //     jack->use(0, *me);
    //     tmp = src->createMateria("ice");
    //     jack->equip(tmp);

    //     jack->use(2, *me);
    //     delete jack;
    //     std::cout << "===================\n";
    // }

    // // Character copy operator
    // {
    //     std::cout << "========copy operator========\n";
    //     Character jack = *me;

    //     jack.use(1, *me);
    //     jack.use(0, *me);
    //     tmp = src->createMateria("ice");
    //     jack.equip(tmp);

    //     jack.use(2, *me);
    //     std::cout << "===================\n";
    // }

    delete me;
    delete src;

    return (0);
}
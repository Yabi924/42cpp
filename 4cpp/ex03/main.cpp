#include "inc/rpg.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
 
    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}

// int main(void)
// {
//     IMateriaSource *src = new MateriaSource;
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     src->learnMateria(new Fire());
//     src->learnMateria(new Water());

//     ICharacter* Yabi = new Character("Yabi");
//     AMateria *tmp;

//     // add Materia to Character (Yabi)
//     {
//         tmp = src->createMateria("ice");
//         Yabi->equip(tmp);
//         tmp = src->createMateria("cure");
//         Yabi->equip(tmp);
//         tmp = src->createMateria("fire");
//         Yabi->equip(tmp);
//         tmp = src->createMateria("water");
//         Yabi->equip(tmp);
//     }

//     // //test use()
//     // {
//     //     std::cout << "========use========\n";
//     //     ICharacter *Noya = new Character("Noya");

//     //     Yabi->use(0, *Noya);
//     //     Yabi->use(1, *Noya);
//     //     Yabi->use(2, *Noya);
//     //     Yabi->use(3, *Noya);
//     //     delete Noya;
//     //     std::cout << "===================\n";
//     // }

//     // //Character copy constructor
//     // {
//     //     std::cout << "========copy constructor========\n";
//     //     ICharacter *anotherMe = new Character(*Yabi);

//     //     anotherMe->use(1, *Yabi);
//     //     anotherMe->use(0, *Yabi);
//     //     tmp = src->createMateria("ice");
//     //     anotherMe->equip(tmp);

//     //     anotherMe->use(2, *Yabi);
//     //     delete anotherMe;
//     //     std::cout << "===================\n";
//     // }

//     // // Character copy operator
//     // {
//     //     std::cout << "========copy operator========\n";
//     //     Character anotherMe = *Yabi;

//     //     anotherMe.use(1, *Yabi);
//     //     anotherMe.use(0, *Yabi);
//     //     anotherMe.unequip(3);
//     //     tmp = src->createMateria("fire");
//     //     anotherMe.equip(tmp);

//     //     anotherMe.use(3, *Yabi);
//     //     anotherMe.use(2, *Yabi);
//     //     anotherMe.use(1, *Yabi);
//     //     anotherMe.use(0, *Yabi);
//     //     std::cout << "===================\n";
//     // }

//     delete Yabi;
//     delete src;

//     return (0);
// }

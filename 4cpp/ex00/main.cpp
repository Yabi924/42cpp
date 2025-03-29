#include "include/Cat.hpp"
#include "include/Dog.hpp"

int main(void)
{
    Animal *A = new Animal;
    Animal *Neko = new Cat("Neko");
    Animal *Inu = new Dog;

    A->makeSound();
    Neko->makeSound();
    Inu->makeSound();

    delete A;
    delete Inu;
    delete Neko;
    return (0);
}

// #include "WrongAnimal/WrongCat.hpp"
// #include "WrongAnimal/WrongDog.hpp"

// int main(void)
// {
//     WrongAnimal *WNeko = new WrongCat("WNeko");
//     Animal *Neko = new Cat("Neko");

//     WNeko->makeSound();
//     Neko->makeSound();

//     delete Neko;
//     delete WNeko;
//     return (0);
// }
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/Brain.hpp"

int main(void)
{
    // Animal animal;

    Animal *Neko = new Cat;

    Neko->makeSound();
    delete Neko;
    return 0;
}

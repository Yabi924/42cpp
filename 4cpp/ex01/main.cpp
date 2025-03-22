#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/Brain.hpp"

// int main(void)
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
    
//     j->makeSound();
//     i->makeSound();

//     delete j;
//     delete i;

//     return 0;
// }

int main(void)
{
    int N = 4;

    const Animal *animal[N];

    std::cout << "=========================================================\n";

    int i = 0;
    while (i < N / 2)
        animal[i++] = new Cat;
    std::cout << "=========================================================\n";
    while (i < N)
        animal[i++] = new Dog;
    std::cout << "=========================================================\n";

    for (int j = 0; j < N; j++)
        animal[j]->makeSound();
    std::cout << "=========================================================\n";

    for (int n = 0; n < N; n++)
        delete animal[n];
    return (0);
}

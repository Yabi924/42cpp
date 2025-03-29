#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/Brain.hpp"

void testDeepCopy(void)
{
    Cat Empty;
    Cat Neko("Neko");

    // for (int i = 0; i < 100; i++)
    //     std::cout << Neko.getBrain(i) << std::endl;
    std::cout << "================================\n";
    Neko.setBrain(1, "Ha");
    for (int i = 0; i < 5; i++)
        std::cout << Neko.getBrain(i) << std::endl;

    std::cout << "=============[copy]=============\n";
    Empty = Neko;
    for (int i = 0; i < 5; i++)
        std::cout << Empty.getBrain(i) << std::endl;

    std::cout << "================================\n";
}

void test_pdf2(void)
{
    int N = 4;

    const Animal *animal[N];

    std::cout << "==========[Cat]================\n";

    int i = 0;
    while (i < N / 2)
        animal[i++] = new Cat;
    std::cout << "==========[Dog]================\n";
    while (i < N)
        animal[i++] = new Dog;
    std::cout << "========[MakeSound]================\n";

    for (int j = 0; j < N; j++)
        animal[j]->makeSound();
    std::cout << "========[Destruct]================\n";

    for (int n = 0; n < N; n++)
        delete animal[n];
}

void test_pdf1(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;
    delete i;
}

int main(void)
{
    test_pdf1();
    // test_pdf2();
    // testDeepCopy();
    return (0);
}

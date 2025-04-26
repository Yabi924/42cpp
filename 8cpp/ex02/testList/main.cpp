#include "MutantStack.hpp"

void testList()
{
    MutantStack<int> ms;

    ms.push(1);
    ms.push(12);
    ms.push(123);

    MutantStack<int>::iterator iter = ms.begin();
    while (iter != ms.end())
    {
        cout << *iter << endl;
        iter++;
    }
}

int main()
{
    testList();
}

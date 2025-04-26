#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;


    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(-100);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    cout << "-------------------" << endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
 
    std::stack<int> s(mstack);
 
    cout << "-------------------" << endl;

    cout << s.top() << endl;
    return 0;
}

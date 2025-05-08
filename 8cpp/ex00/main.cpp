#include "easyfind.hpp"

template <class Container>
void print(Container &ctr)
{
    typename Container::iterator iter = ctr.begin();
    while (iter != ctr.end())
        cout << *iter++;
    cout << endl;
}

void playingContainer()
{
    std::vector<string> vec;

    vec.push_back("Oh ");
    vec.push_back("my ");
    vec.push_back("go");
    vec.push_back("tto");
    vec.push_back(", ");
    vec.push_back("it's ");
    vec.push_back("Reimu");
    vec.push_back("!");

    print(vec);

    std::vector<string>::iterator iter = vec.end();
    while (--iter != vec.begin())
        if (*iter == "Reimu")
            break ;
    vec.erase(iter);
    vec.insert(iter, "Baka");

    print(vec);
}

void testVector()
{
    cout << "----[test with container <vector>----------]" << endl;

    try
    {
        std::vector<int> vec(5, 1);
        vec.insert(vec.end(), 10);

        std::vector<int>::iterator iter = easyfind(vec, 10);
        cout << "found: " << *iter << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::vector<int> vec(5, 1);
        vec.insert(vec.end(), 10);

        std::vector<int>::iterator iter = easyfind(vec, 2);
        cout << "found: " << *iter << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void testList()
{
    cout << "----[test with container <list>----------]" << endl;
    try
    {
        std::list<int> lst(5, 1);
        lst.insert(lst.end(), 10);

        std::list<int>::iterator iter = easyfind(lst, 10);
        cout << "found: " << *iter << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::list<int> lst(5, 1);
        lst.insert(lst.end(), 12);

        std::list<int>::iterator iter = easyfind(lst, 10);
        cout << "found: " << *iter << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    if (MYFLAG == 1)
        testVector();
    else if (MYFLAG == 2)
        testList();
    else if (MYFLAG == 3)
        playingContainer();

    // string a;
    // string b = easyfind(a, 1);

    return (0);
}
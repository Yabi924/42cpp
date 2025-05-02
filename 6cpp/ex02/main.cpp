#include "ABC.hpp"

Base *generate()
{
    cout << "generate: ";
    srand(time(NULL));

    unsigned int n = rand();
    if (n % 3 == 1)
    {
        cout << "generated A" << endl;
        return (new A);
    }
    else if (n % 3 == 2)
    {    
        cout << "generated B" << endl;
        return (new B);
    }

    cout << "generated C" << endl;
    return (new C);
}

void identify(Base *p)
{
    cout << "pointer indentify: ";
    A *a = dynamic_cast<A *>(p);
    if (a)
    {
        cout << "p is A" << endl;
        return ;
    }
    B *b = dynamic_cast<B *>(p);
    if (b)
    {
        cout << "p is B" << endl;
        return ;
    }
    C *c = dynamic_cast<C *>(p);
    if (c)
    {
        cout << "p is C" << endl;
        return ;
    }
    cout << "?" << endl;
}

void identify(Base &p)
{
    cout << "reference indentify: ";
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        cout << "p is A" << endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        cout << "p is B" << endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        cout << "p is C" << endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    cout << "?" << endl;
}

void testBase()
{
    cout << "----test base----" << endl;
    Base *base = new Base;

    identify(base);
    identify(*base);
    delete base;
}

void test()
{
    cout << "----normal test----" << endl;
    Base *ran = generate();

    identify(ran);
    identify(*ran);

    delete ran;
}

int main()
{
    if (MYFLAG == 0)
        test();
    if (MYFLAG == 1)
        testBase();
    return (0);
}

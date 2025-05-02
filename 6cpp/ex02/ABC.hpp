#pragma once

# include <iostream>
# include <cstdlib>
# include <ctime>

# ifndef MYFLAG
#  define MYFLAG 0
# endif

using std::cout;
using std::endl;

class Base
{
public:
    virtual ~Base() {};
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

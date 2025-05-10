#pragma once

#ifndef MYFLAG
# define MYFLAG 0
# endif

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>

using std::cout;
using std::endl;
using std::string;

class MyExceptionNotFound: public std::exception
{
    const char *what() const throw() { return "Value not found"; }
};

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), n);
    if (iter == container.end())
        throw MyExceptionNotFound();
    return iter;
}
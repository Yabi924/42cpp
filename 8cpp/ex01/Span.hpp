#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <set>
#include <climits>

using std::string;
using std::cout;
using std::endl;
using std::set;

#ifndef MYFLAG
# define MYFLAG 0
#endif

class Span
{
private:
    set<int> container;
    unsigned int max;

public:
    Span();
    Span(const Span &other);
    Span(unsigned int max);
    ~Span();

    Span &operator=(const Span &other);

    void addNumber(int);
    void addManyNumber(int, int);
    int shortestSpan() const;
    int longestSpan() const;

    class MyExceptionMax: public std::exception
    {
        const char *what() const throw() { return "Container storage is full"; }
    };
};

// template <class Container>
// void print(Container &ctr)
// {
//     typename Container::iterator iter = ctr.begin();
//     while (iter != ctr.end())
//         cout << *iter++;
//     cout << endl;
// }

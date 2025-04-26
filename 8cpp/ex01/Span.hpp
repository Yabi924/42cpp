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
using std::find;

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
    int shortestSpan() const;
    int longestSpan() const;

    void autoAddNumber(int min, int max);

    class MyExceptionMax: public std::exception
    {
        const char *what() const throw() { return "Container storage is full"; }
    };

    template <typename T>
    void swap(T &a, T &b) const
    {
        T tmp = a;
        a = b;
        b = tmp;
    }
};

// template <class Container>
// void print(Container &ctr)
// {
//     class Container::iterator iter = ctr.begin();
//     while (iter != ctr.end())
//         cout << *iter++;
//     cout << endl;
// }

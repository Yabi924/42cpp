#pragma once

#include <algorithm>
#include <stack>
#include <iostream>
#include <string>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::stack;
using std::list;

template <typename T>
class MutantStack: public stack<T, list<int> >
{
public:
    MutantStack();
    MutantStack(const MutantStack &other);
    ~MutantStack();

    MutantStack &operator=(const MutantStack &other);
    typedef typename list<T>::iterator iterator;
    typedef typename list<T>::const_iterator const_iterator;

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;

};

#include "MutantStack.tpp"


/*
inside container stack

default will use deque container
if only passed one argument

                          //container
template <typename T, class c = std::deque<T>>
class stack
{
    protected:
    c<T>;

    public:

    pop();
    push();
    size();
    ...
}

*/
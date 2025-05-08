#pragma once

#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>
#include <string>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::stack;
using std::deque;
using std::list;

template <typename T>
class MutantStack: public stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack &other);
    ~MutantStack();

    MutantStack &operator=(const MutantStack &other);
    typedef typename deque<T>::iterator iterator;
    typedef typename deque<T>::const_iterator const_iterator;

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;

};

#include "MutantStack.tpp"

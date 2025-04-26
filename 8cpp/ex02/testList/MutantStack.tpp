#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): stack<T, list<int> >() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other): stack<T,list<int> >() { *this = other; }

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
    if (this == &other)
        return *this;
    stack<T>::operator=(other);
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (this->c.end());
}

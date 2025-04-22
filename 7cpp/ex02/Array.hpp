#pragma once

#include <string>
#include <iostream>

#ifndef MYFLAG
# define MYFLAG 0
#endif

template <typename T>
class Array
{
private:
    T *arr;
    unsigned int Size;

public:
    Array();
    Array(const Array &other);
    Array(unsigned int N);
    ~Array();
    
    Array &operator=(const Array &other);
    T &operator[](unsigned int idx);

    unsigned int size() const;
};

#include "Array.tpp"
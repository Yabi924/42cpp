#include "Array.hpp"

template <typename T>
Array<T>::Array():arr(new T[0]), Size(0) {}

template <typename T>
Array<T>::Array(unsigned int i):arr(new T[i]), Size(i) {}

template <typename T>
Array<T>::Array(const Array<T> &other): arr(new T[0])
{
    *this = other;
}

template <typename T>
Array<T>::~Array()
{
    delete[] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this == &other)
        return *this;

    delete[] this->arr;
    this->arr = new T[other.Size];

    this->Size = other.Size;
    
    for (unsigned int i = 0; i < this->Size; i++)
        this->arr[i] = other.arr[i];

    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int idx)
{
    if (this->Size <= idx)
        throw std::out_of_range("Index out of bounds");
    return this->arr[idx];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->Size);
}

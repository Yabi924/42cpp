#pragma once

#include <iostream>
#include <string>

#ifndef MYFLAG
# define MYFLAG 0
#endif

// template <typename Array, typename FuncReturn>
// void iter(Array *arr, int len, FuncReturn (*func)(Array &))
// {
//     if (!arr || !func || len < 1)
//         return ;
//     for (int i = 0; i < len; i++)
//         func(arr[i]);
// }

template <typename Array>
void iter(Array *arr, int len, void (*func)(Array &))
{
    if (!arr || !func || len < 1)
        return ;
    for (int i = 0; i < len; i++)
        func(arr[i]);
}
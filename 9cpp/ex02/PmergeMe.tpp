#include "PmergeMe.hpp"

template <typename C>
void PmergeMe::printPair(C ctr)
{
    int i = 0;
    typename C::iterator iter = ctr.begin();
    while (iter != ctr.end())
    {
        cout << "idx" << i++ << ": " << iter->first << ", " << iter->second << endl;
        iter++;
    }
    cout << "Single: " << this->single << endl;
}

template <typename C>
void PmergeMe::printValue(C ctr)
{
    int i = 0;
    typename C::iterator iter = ctr.begin();
    while (iter != ctr.end())
    {
        cout << "idx" << i++ << ": " << *iter << endl;
        iter++;
    }
}

template <typename C>
void PmergeMe::IsSorted(C ctr)
{
    typename C::iterator iter = ctr.begin();
    while (iter != ctr.end())
    {
        int a = *iter++;
        int b = 0;
        if (iter != ctr.end())
            b = *iter++;
        else
            break ;
        if (a > b)
        {
            cout << "You're fuck up" << endl;
            return ;
        }
    }
    cout << "Sorted :)" << endl;
}

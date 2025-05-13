#include "PmergeMe.hpp"

template <typename C>
void PmergeMe::MergeSort(C &p)
{
    if (p.size() < 2)
        return ;
    int mid = p.size() / 2;

    C a(p.begin(), p.begin() + mid);
    C b(p.begin() + mid, p.end());

    TMergeSort(a);
    TMergeSort(b);
    p.clear();

    typename C::iterator iterA = a.begin();
    typename C::iterator iterB = b.begin();
    while (iterA != a.end() &&  iterB != b.end())
    {
        if (iterA->second > iterB->second)
            p.push_back(*iterB++);
        else
            p.push_back(*iterA++);
    }

    while (iterA != a.end())
        p.push_back(*iterA++);
    while (iterB != b.end())
        p.push_back(*iterB++);

    cout << "-----------------------------------\n";
    printValue(p);
    cout << "-----------------------------------\n";
}

template <typename C>
void PmergeMe::printValue(C ctr)
{
    int i = 0;
    typename C::iterator iter = ctr.begin();
    while (iter != ctr.end())
    {
        cout << "Idx" << i++ << ": " << iter->first << ", " << iter->second << endl;
        iter++;
    }
    cout << "Single: " << this->single << endl;
}

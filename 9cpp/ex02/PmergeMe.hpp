#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <exception>
#include <climits>
#include <ctime>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class PmergeMe
{
private:
    std::vector<std::pair<int, int> > vec;
    std::vector<int> Result;
    // std::deque<std::pair<int, int> > deq;
    int single;

    template <typename C>
    void printPair(C ctr);

    template <typename C>
    void printValue(C ctr);

    template <typename C>
    void MergeSort(C &p);

    void insertSort(std::vector<std::pair<int, int> > &p);

public:
    PmergeMe();
    PmergeMe(char **input);
    PmergeMe(const PmergeMe &);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &);

    bool isValid(string input);
    void sortVec(char **input);
    void printResult();
    // void MergeSort(std::vector<std::pair<int, int> > &);

    std::pair<int, int> getInput(string a, string b);

    int Jacobsthal(int n) const;

    class InputInvalidException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    template <typename C>
    void IsSorted(C ctr);
};

#include "PmergeMe.tpp"
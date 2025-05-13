#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <exception>
#include <climits>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class PmergeMe
{
private:
    std::vector<std::pair<int, int> > vec;
    std::deque<std::pair<int, int> > deq;
    int single;

public:
    PmergeMe();
    PmergeMe(char **input);
    PmergeMe(const PmergeMe &);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &);

    bool isValid(string input);
    void sortVec(char **input);
    // void MergeSort(std::vector<std::pair<int, int> > &);

    std::pair<int, int> getInput(string a, string b);

    template <typename C>
    void printValue(C ctr);

    template <typename C>
    void MergeSort(C &p);

    void insertSort(std::vector<std::pair<int, int> > &p);

    class InputInvalidException: public std::exception
    {
        public:
            const char *what() const throw();
    };

};

#include "PmergeMe.tpp"
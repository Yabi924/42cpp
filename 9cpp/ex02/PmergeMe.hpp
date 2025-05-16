#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <exception>
#include <climits>
#include <ctime>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

#ifndef MYFLAG
# define MYFLAG 0
# endif

class PmergeMe
{
private:
    std::list<int> ResultList;
    std::vector<int> Result;
    // std::deque<std::pair<int, int> > deq;
    int single;


    bool isValid(string input);
    std::pair<int, int> getInput(string a, string b);
    void MergeSort(std::vector<std::pair<int, int> > &);
    void MergeSortList(std::list<std::pair<int, int> > &);

    int Jacobsthal(int n) const;

    template <typename C>
    void printPair(C ctr);

    template <typename C>
    void printValue(C ctr);

    void insertSort(std::vector<std::pair<int, int> > &p);
    void insertSortList(std::list<std::pair<int, int> > &p);

public:
    PmergeMe();
    PmergeMe(char **input);
    PmergeMe(const PmergeMe &);
    ~PmergeMe();
    PmergeMe &operator=(const PmergeMe &);

    //vector
    void sortVec(char **input);
    void printResult();

    //list
    void sortList(char **input);
    void printListResult();

    class InputInvalidException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    template <typename C>
    void IsSorted(C ctr);
};

#include "PmergeMe.tpp"
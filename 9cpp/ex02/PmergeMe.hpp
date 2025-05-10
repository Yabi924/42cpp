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
    
    bool isValid(string input);
    void sortVec(char **input);

    std::pair<int, int> getInput(string a, string b);

    PmergeMe &operator=(const PmergeMe &);

    class InputInvalidException: public std::exception
    {
        public:
            const char *what() const throw();
    };



    template <typename C>
    void printValue(C ctr)
    {
        int i = 0;
        typename C::iterator iter = ctr.begin();
        while (iter != ctr.end())
        {
            cout << i++ << ": " << iter->first << ", " << iter->second << endl;
            iter++;
        }
        cout << "Single: " << this->single << endl;
    }
};

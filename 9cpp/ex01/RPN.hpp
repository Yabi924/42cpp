#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <exception>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::stack;

class RPN
{
private:
    stack<int> c;
    void count(char op);

public:
    RPN();
    RPN(const string &);
    RPN(const RPN &);
    RPN &operator=(const RPN &);
    ~RPN();

    void checkInput(const string &input);

    class InputInvalidException: public std::exception
    {
        public:
            const char *what() const throw();
    };

};

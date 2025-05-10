#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN &a) { *this = a; }
RPN &RPN::operator=(const RPN &a) { this->c = a.c; return *this; }

void RPN::count(char op)
{
    if (this->c.size() < 2)
        throw InputInvalidException();

    int b = this->c.top();
    this->c.pop();
    int a = this->c.top();
    this->c.pop();
    switch (op)
    {
        case '+':
        this->c.push(a + b);
        cout << a << " + " << b;
        break;
        case '-':
        this->c.push(a - b);
        cout << a << " - " << b;
        break;
        case '*':
        this->c.push(a * b);
        cout << a << " * " << b;
        break;
        case '/':
        if (b == 0)
            throw InputInvalidException();
        this->c.push(a / b);
        cout << a << " / " << b;
        break;
    }
    cout << " = " << this->c.top() << endl;
}

void RPN::checkInput(const string &input)
{
    if (input.empty() || !std::isdigit(static_cast<int>(input[0])))
        throw InputInvalidException();

    string operat0r("+-*/");

    for (int i = 0; input[i]; i++)
    {
        if (i % 2 == 0)
        {
            if (std::isdigit(static_cast<int>(input[i])))
                this->c.push(input[i] - '0');
            else if (operat0r.find(input[i]) != std::string::npos)
                count(input[i]);
            else
                throw InputInvalidException();
        }
        else if (input[i] != ' ')
            throw InputInvalidException();
    }
    if (this->c.size() != 1)
        throw InputInvalidException();
    else 
        cout << "result: " << this->c.top() << endl;
}

const char *RPN::InputInvalidException::what() const throw()
{
    return "Error: Invalid Input";
}
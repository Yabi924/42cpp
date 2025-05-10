#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &a) { *this = a; }
PmergeMe::~PmergeMe() {}
PmergeMe &PmergeMe::operator=(const PmergeMe &a)
{
    this->vec = a.vec;
    this->deq = a.deq;
    this->single = a.single;

    return *this;
}

PmergeMe::PmergeMe(char **in): single(-1)
{
    int i = -1;
    while (in[++i])
        if (!isValid(in[i]))
            throw InputInvalidException();
    i = -1;
    cout << "before: ";
    while (in[++i])
        cout << in[i] << " ";
    cout << endl;
}

bool PmergeMe::isValid(string input)
{
    for (int i = 0; input[i]; i++)
        if (!std::isdigit(static_cast<int>(input[i])))
            return false;
    std::stringstream N(input);
    long I = 0;
    N >> I;
    if (I > INT_MAX)
        return false;
    return true;
}

std::pair<int, int> PmergeMe::getInput(string a, string b)
{
    if (a <= b)
        return std::pair<int, int>(std::atoi(a.c_str()), std::atoi(b.c_str()));
    else 
        return std::pair<int, int>(std::atoi(b.c_str()), std::atoi(a.c_str()));
}

const char *PmergeMe::InputInvalidException::what() const throw()
{
    return "Error: Invalid input";
}

void PmergeMe::sortVec(char **input)
{
    int i = 0;
    while (input[i]) //vec
    {
        if (input[i] && input[i + 1])
        {
            this->vec.push_back(getInput(input[i], input[i + 1]));
            i += 2;
        }
        else if (input[i] && !input[i + 1])
            single = std::atoi(input[i++]);
    }
    // printValue(this->vec);
}
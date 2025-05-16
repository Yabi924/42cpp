#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &a) { *this = a; }
PmergeMe::~PmergeMe() {}
PmergeMe &PmergeMe::operator=(const PmergeMe &a)
{
    this->vec = a.vec;
    // this->deq = a.deq;
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
    cout << endl << "-----------------------------------" << endl;
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
    std::vector<std::pair<int, int> > temp;
    while (input[i]) //vec
    {
        if (input[i] && input[i + 1])
        {
            temp.push_back(getInput(input[i], input[i + 1]));
            i += 2;
        }
        else if (input[i] && !input[i + 1])
            single = std::atoi(input[i++]);
    }
    // cout << "-----------------------------------\n";
    // printValue(temp);
    // cout << "-----------------------------------\n";
    MergeSort(temp);
    // printPair(temp);
    insertSort(temp);
}

void PmergeMe::insertSort(std::vector<std::pair<int, int> > &p)
{
    std::vector<int> pend;

    std::vector<std::pair<int, int> >::iterator iter = p.begin();
    for (; iter != p.end(); iter++)
    {
        pend.push_back(iter->first);
        this->Result.push_back(iter->second);
    }

    int JacobsthalNum = 0;
    int SLength = pend.size();
    for (int i = 0; 1; i++)
    {
        JacobsthalNum = Jacobsthal(i + 2) - 1;
        // cout << endl << "i: " << i << " j: "  << JacobsthalNum << endl;
        if (JacobsthalNum >= SLength || i == SLength)
           break ;
        int nbr = pend[i];
        // cout << "pend[" << i << "]: " << nbr << " pend:" << endl;
        // printValue(pend);

        pend.erase(pend.begin() + i);
        pend.insert(pend.begin() + JacobsthalNum, nbr);
    }
    // cout << "-----------------------------------\n";
    // cout << "pend:" << endl;
    // printValue(pend);

    for (std::vector<int>::iterator iter = pend.begin(); iter != pend.end(); iter++)
        this->Result.insert(std::lower_bound(this->Result.begin(), this->Result.end(), *iter), *iter);

    if (this->single != -1)
        this->Result.insert(std::lower_bound(this->Result.begin(), this->Result.end(), this->single), this->single);

    // IsSorted(this->Result);
}

int PmergeMe::Jacobsthal(int n) const
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Jacobsthal(n - 1) + (2 * Jacobsthal(n - 2));
}

// void PmergeMe::MergeSort(std::vector<std::pair<int, int> > &p)
// {
//     if (p.size() < 2)
//         return ;
//     int mid = p.size() / 2;

//     std::vector<std::pair<int, int> > a(p.begin(), p.begin() + mid);
//     std::vector<std::pair<int, int> > b(p.begin() + mid, p.end());

//     MergeSort(a);
//     MergeSort(b);
//     p.clear();

//     std::vector<std::pair<int, int> >::iterator iterA = a.begin();
//     std::vector<std::pair<int, int> >::iterator iterB = b.begin();
//     while (iterA != a.end() &&  iterB != b.end())
//     {
//         if (iterA->second > iterB->second)
//             p.push_back(*iterB++);
//         else
//             p.push_back(*iterA++);
//     }

//     while (iterA != a.end())
//         p.push_back(*iterA++);
//     while (iterB != b.end())
//         p.push_back(*iterB++);

//     cout << "-----------------------------------\n";
//     printValue(p);
//     cout << "-----------------------------------\n";
// }

void PmergeMe::printResult()
{
    cout << "After: ";
    std::vector<int>::iterator iter = this->Result.begin();
    for (; iter != this->Result.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): single(-1) {}
PmergeMe::PmergeMe(const PmergeMe &a) { *this = a; }
PmergeMe::~PmergeMe() {}
PmergeMe &PmergeMe::operator=(const PmergeMe &a)
{
    this->single = a.single;
    this->Result = a.Result;
    this->ResultList = a.ResultList;

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
    // printPair(temp);
    // cout << "-----------------------------------\n";
    MergeSort(temp);
    // printPair(temp);
    insertSort(temp);
}

void PmergeMe::MergeSort(std::vector<std::pair<int, int> > &p)
{
    if (p.size() < 2)
        return ;
    int mid = p.size() / 2;

    std::vector<std::pair<int, int> > a(p.begin(), p.begin() + mid);
    std::vector<std::pair<int, int> > b(p.begin() + mid, p.end());

    MergeSort(a);
    MergeSort(b);
    p.clear();

    std::vector<std::pair<int, int> >::iterator iterA = a.begin();
    std::vector<std::pair<int, int> >::iterator iterB = b.begin();
    while (iterA != a.end() && iterB != b.end())
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

    // cout << "-----------------------------------\n";
    // printValue(p);
    // cout << "-----------------------------------\n";
}

void PmergeMe::insertSort(std::vector<std::pair<int, int> > &p)
{
    std::vector<int> pend;

    std::vector<std::pair<int, int> >::iterator iter = p.begin();
    pend.push_back(iter->first);
    pend.push_back(iter->second);
    iter++;
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
        if (JacobsthalNum >= SLength || i == SLength)
           break ;
        if (i == JacobsthalNum)
            continue ;
        int nbr = pend[i];

        pend.erase(pend.begin() + i);
        pend.insert(pend.begin() + JacobsthalNum, nbr);
    }

    for (std::vector<int>::iterator iter = pend.begin(); iter != pend.end(); iter++)
        this->Result.insert(std::lower_bound(this->Result.begin(), this->Result.end(), *iter), *iter);

    if (this->single != -1)
        this->Result.insert(std::lower_bound(this->Result.begin(), this->Result.end(), this->single), this->single);

    // IsSorted(this->Result);
}

void PmergeMe::sortList(char **input)
{
    int i = 0;
    std::list<std::pair<int, int> > temp;
    while (input[i])
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
    MergeSortList(temp);
    // printPair(temp);
    insertSortList(temp);
}

void PmergeMe::MergeSortList(std::list<std::pair<int, int> > &p)
{
    if (p.size() < 2)
        return ;
    int mid = p.size() / 2;

    std::list<std::pair<int, int> >::iterator iterMid = p.begin();
    std::advance(iterMid, mid);

    std::list<std::pair<int, int> > a(p.begin(), iterMid);
    std::list<std::pair<int, int> > b(iterMid, p.end());

    MergeSortList(a);
    MergeSortList(b);
    p.clear();

    std::list<std::pair<int, int> >::iterator iterA = a.begin();
    std::list<std::pair<int, int> >::iterator iterB = b.begin();
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
}

void PmergeMe::insertSortList(std::list<std::pair<int, int> > &p)
{
    std::list<int> pend;

    std::list<std::pair<int, int> >::iterator iter = p.begin();
    pend.push_back(iter->first);
    pend.push_back(iter->second);
    iter++;
    for (; iter != p.end(); iter++)
    {
        pend.push_back(iter->first);
        this->ResultList.push_back(iter->second);
    }

    int JacobsthalNum = 0;
    int SLength = pend.size();
    for (int i = 0; 1; i++)
    {
        JacobsthalNum = Jacobsthal(i + 2) - 1;
        if (JacobsthalNum >= SLength || i == SLength)
           break ;
        if (JacobsthalNum == i)
            continue ;

        std::list<int>::iterator temp = pend.begin();
        std::list<int>::iterator tempJac = pend.begin();

        std::advance(temp, i);
        std::advance(tempJac, JacobsthalNum);
        int nbr = *temp;

        pend.erase(temp);
        pend.insert(tempJac, nbr);
    }

    for (std::list<int>::iterator iter = pend.begin(); iter != pend.end(); iter++)
        this->ResultList.insert(std::lower_bound(this->ResultList.begin(), this->ResultList.end(), *iter), *iter);

    if (this->single != -1)
        this->ResultList.insert(std::lower_bound(this->ResultList.begin(), this->ResultList.end(), this->single), this->single);
}

int PmergeMe::Jacobsthal(int n) const
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Jacobsthal(n - 1) + (2 * Jacobsthal(n - 2));
}

void PmergeMe::printResult()
{
    cout << "After: ";
    std::vector<int>::iterator iter = this->Result.begin();
    for (; iter != this->Result.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}

void PmergeMe::printListResult()
{
    cout << "After: ";
    std::list<int>::iterator iter = this->ResultList.begin();
    for (; iter != this->ResultList.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}

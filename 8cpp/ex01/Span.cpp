#include "Span.hpp"

Span::Span():max(0){}
Span::Span(unsigned int _max): max(_max){}
Span::Span(const Span &other) { *this = other; }
Span::~Span() {}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;

    this->container = other.container;
    this->max = other.max;

    return *this;
}

void Span::addNumber(int N)
{
    if (this->container.size() == this->max)
        throw MyExceptionMax();
    this->container.insert(N);        
}

void Span::addManyNumber(int start, int end)
{
    if (start > end)
        std::swap(start, end);
    try
    {
        while (start != end + 1)
            addNumber(start++);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::longestSpan() const
{
    set<int>::const_iterator iter_end = --this->container.end();
    set<int>::const_iterator iter_start = this->container.begin();

    // cout << *iter_end << " " << *iter_start << endl;
    return (*iter_end - *iter_start);
}

int Span::shortestSpan() const
{
    set<int>::iterator iter = this->container.begin();
    set<int>::iterator iter_loop;

    int min = INT_MAX;
    while (iter != this->container.end())
    {
        int temp1 = *iter;
        iter_loop = this->container.begin();

        while (iter_loop != this->container.end())
        {
            int temp2 = *iter_loop;

            // cout << min << "/ (" << temp1 << " - " << temp2 << ") -> ";
            if (temp1 < temp2)
                std::swap(temp1, temp2);
            // cout << '(' << temp1 <<  " - " << temp2 << ") = " <<  temp1 - temp2 << endl;
            if (temp1 != temp2 && (temp1 - temp2) < min)
                min = (temp1 - temp2);

            iter_loop++;
        }
        // cout << endl;
        iter++;
    }
    return (min);
}

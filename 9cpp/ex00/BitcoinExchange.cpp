#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this == &other)
        return (*this);

    this->c = other.c;
    return (*this);
}

bool BitcoinExchange::validValue(string line)
{
    if (std::count(line.begin(), line.end(), '.') > 1)
        return false;
    for (int i = 0; i < static_cast<int>(line.length()); i++)
        if (!isdigit(static_cast<int>(line[i])))
            if (line[i] != '.')
                return false;

    double value = std::atof(line.c_str());
    if (value < 0)
        return false;

    return true;
}

bool isLeafYear(int yyyy)
{
    return ((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 100);
}

bool BitcoinExchange::validDate(string &line)
{
    if (line[10] != ',')
        return false;

    string yyyy = line.substr(0, 4);
    string mm = line.substr(5, 2);
    string dd = line.substr(8, 2);

    for (int i = 0; i < 4; i++)
        if (!std::isdigit(static_cast<int>(yyyy[i])))
            return false;
    for (int i = 0; i < 2; i++)
        if (!std::isdigit(static_cast<int>(mm[i])) || !std::isdigit(static_cast<int>(dd[i])))
            return false;

    int year = std::atoi(yyyy.c_str());
    int month = std::atoi(mm.c_str());
    int day = std::atoi(dd.c_str());

    if (month < 1 && month > 12)
        return false;

    {
        int dayInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((month == 2 && isLeafYear(year)) && ((month == 2 && day < 1) || (month == 2 && day > 29)))
                return false;
        else if (day < 1 || day > dayInMonth[month - 1])
                    return false;
    }

    string value = line.substr(11);

    if (!validValue(value))
        return false;

    this->c[line.substr(0, 10)] = std::atof(value.c_str());
    cout << line << " | " << c[line.substr(0, 10)] << endl;

    return true;
}

const char *BitcoinExchange::DateValueException::what() const throw()
{
    return "Invalid date or value";
}

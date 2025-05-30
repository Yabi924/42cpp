#include "BitcoinExchange.hpp"

bool errormsg(string m)
{
    cerr << m << endl;
    return false;
}

BitcoinExchange::BitcoinExchange()
{
    string line;
    std::ifstream file("data.csv");

    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream valueStr(line.substr(11));
        double value = 0;
        valueStr >> value;
        data[line.substr(0, 10)] = value;
        // cout << std::fixed << std::setprecision(2);
        // cout << line << " | " << data[line.substr(0, 10)] << endl;
    }
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this == &other)
        return (*this);

    this->data = other.data;
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

    std::stringstream valueStr(line);
    double value = 0;
    valueStr >> value;
    if (value < 0 || value > 1000)
        return false;

    return true;
}

bool isLeafYear(int yyyy)
{
    return ((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 400);
}

bool BitcoinExchange::validDateValue(string &line)
{
    if (line.length() < 13 || line.substr(10, 3).compare(" | ") ||
        line[4] != '-' || line[7] != '-')
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

    if (month < 1 || month > 12)
        return false;

    {
        int dayInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((month == 2 && isLeafYear(year)) && ((month == 2 && day < 1) || (month == 2 && day > 29)))
                return false;
        else if (day < 1 || day > dayInMonth[month - 1])
                    return false;
    }

    string valueStr = line.substr(13);

    if (!validValue(valueStr))
        return false;

    double Value = 0;
    std::stringstream ssValue(valueStr);
    ssValue >> Value;

    string date = line.substr(0, 10);
    std::map<string, double>::iterator iter = this->data.lower_bound(date);

    if (iter == data.end())
        --iter;
    else if (iter->first != date)
    {
        if (iter == data.begin())
            return false;
        --iter;
    }

    cout << std::fixed << std::setprecision(2);
    cout << line << " -> " << GREEN << iter->second * Value << RESETEND;

    return true;
}

#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <sstream>
#include <exception>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class BitcoinExchange
{
private:
    std::map<string, float> c;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    ~BitcoinExchange();
    BitcoinExchange &operator=(const BitcoinExchange &other);

    bool validDate(string &line);
    bool validValue(string line);

    class DateValueException: public std::exception
    {
        const char *what() const throw();
    };
};

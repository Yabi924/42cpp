#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <sstream>
#include <exception>
#include <cstdlib>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class BitcoinExchange
{
private:
    std::map<string, double> data;
    std::map<string, double> input;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    ~BitcoinExchange();
    BitcoinExchange &operator=(const BitcoinExchange &other);

    bool validDateValue(string &line);
    bool validValue(string line);

    class DateValueException: public std::exception
    {
        const char *what() const throw();
    };
};

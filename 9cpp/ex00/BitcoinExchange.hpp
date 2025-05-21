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

#define RESET  "\033[0m"
#define RESETEND  "\033[0m" << endl
#define RED    "\033[0;31m"
#define GREEN  "\033[0;32m"

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class BitcoinExchange
{
private:
    std::map<string, double> data;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    ~BitcoinExchange();
    BitcoinExchange &operator=(const BitcoinExchange &other);

    bool validDateValue(string &line);
    bool validValue(string line);

};

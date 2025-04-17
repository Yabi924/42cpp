#ifndef SC_HPP
# define SC_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <exception>

# ifndef MYFLAG
#  define MYFLAG 0
# endif

using std::cout;
using std::endl;
typedef std::string str;

class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ~ScalarConverter();
    ScalarConverter &operator=(const ScalarConverter &other);

public:
    static void convert(const str &input);

};

#endif
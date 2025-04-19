#ifndef SZT_HPP
# define SZT_HPP

# include <iostream>
# include <string>
# include <cstdint>

# ifndef MYFLAG
#  define MYFLAG 0
# endif

using std::string;
using std::cout;
using std::endl;

struct Data
{
    string s;
};

class Serialization
{
    Serialization();
    Serialization(const Serialization &other);
    Serialization &operator=(const Serialization &other);

public:
    ~Serialization();

    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);

};

#endif
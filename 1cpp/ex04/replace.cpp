#include "replace.hpp"

void replace(std::string &line, std::string s1, std::string s2)
{
    std::string result;
    size_t index = 0;
    size_t found = line.find(s1);

    while (found != std::string::npos)
    {
        result += line.substr(index, found - index);
        result += s2;
        index = found + s1.length();
        found = line.find(s1, index);
    }
    result += line.substr(index, found - index);
    line = result;
}

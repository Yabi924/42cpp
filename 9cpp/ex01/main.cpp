#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    try
    {
        RPN a;
        a.checkInput(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
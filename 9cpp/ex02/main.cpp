#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
        return 1;
    argv = argv + 1;

    try
    {
        PmergeMe mer(argv);
        //vector time start here;
        mer.sortVec(argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

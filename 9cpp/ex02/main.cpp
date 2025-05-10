#include "PmergeMe.hpp"



int main(int argc, char **argv)
{
    if (argc < 2)
        return 1;

    try
    {
        PmergeMe mer(argv + 1);
        //vector time start here;
        mer.sortVec(argv + 1);


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

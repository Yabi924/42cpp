#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cerr << "Error: use ./PmergeMe number1 number2 ..." << endl; 
        return 1;
    }
    argv = argv + 1;

    try
    {
        PmergeMe mer(argv);
        clock_t timeStart = clock();
        mer.sortVec(argv);
        clock_t timeEnd = clock();
        double VecTime = static_cast<double>(timeEnd - timeStart) * 1e6 / CLOCKS_PER_SEC;
        mer.printResult();
        cout << VecTime << "µs" << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

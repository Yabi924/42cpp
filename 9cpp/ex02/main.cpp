#include "PmergeMe.hpp"

void vec(PmergeMe mer, char **argv)
{
    clock_t timeStart = clock();

    mer.sortVec(argv);

    clock_t timeEnd = clock();

    double VecTime = static_cast<double>(timeEnd - timeStart) * 1e6 / CLOCKS_PER_SEC;

    mer.printResult();
    cout << "Vector: " << VecTime << "µs" << endl;
}

void lst(PmergeMe mer, char **argv)
{
    clock_t timeStart = clock();

    mer.sortList(argv);

    clock_t timeEnd = clock();

    mer.printListResult();
    double Time = static_cast<double>(timeEnd - timeStart) * 1e6 / CLOCKS_PER_SEC;
    cout << "List: " << Time << "µs" << endl;
}

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
        if (MYFLAG == 0 || MYFLAG == 1)
            vec(mer, argv);
        if (MYFLAG == 0 || MYFLAG == 2)
            lst(mer, argv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

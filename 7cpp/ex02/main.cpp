#include "Array.hpp"

void teststring()
{
    Array<std::string> arr(2);

    arr[0] = "wao";
    arr[1] = "da";

    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;

    try
    {
        arr[3] = "wa";
        std::cout << arr[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testint()
{
    Array<int> arr(3);

    try
    {
        arr[0] = 0;
        std::cout << arr[0] << std::endl;

        arr[1] = 1;
        std::cout << arr[1] << std::endl;

        arr[2] = 2;
        std::cout << arr[2] << std::endl;
        
        arr[3] = 3;
        std::cout << arr[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testOCCF()
{
    unsigned int size = 10;
    Array<int> arr(size);

    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i * 2;

    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;

    Array<int> b(arr);

    for (unsigned int i = 0; i < b.size(); i++)
        std::cout << b[i] << std::endl;

}

int main()
{
    if (MYFLAG == 1)
        teststring();
    else if (MYFLAG == 2)
        testint();
    else if (MYFLAG == 3)
        testOCCF();
    return (0);
}
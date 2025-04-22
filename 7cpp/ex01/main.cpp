#include "Iter.hpp"

void func(char &s)
{
    std::cout << static_cast<char>(std::toupper(static_cast<int>(s)));
}

void testcstr()
{
    std::cout << "------[test c_str, func = toupper]---------" << std::endl;
    {
        char str[] = "I'm good:)";
        std::cout << "test: str = \"" << str << "\", Length = " << std::string(str).length() << std::endl;

        iter(str, std::string(str).length(), &func);
        std::cout << std::endl << std::endl;
    }
    {
        char str[] = "abcdefg";
        std::cout << "test: str = \"" << str << "\", Length = " << 2 << std::endl;

        iter(str, 2, &func);
        std::cout << std::endl << std::endl;
    }
    {
        char str[] = "abcdefg";
        std::cout << "test: str = \"" << str << "\", Length = " << 0 << std::endl;

        iter(str, 0, &func);
        std::cout << std::endl;
    }

}

void func(int &n)
{
    std::cout << n * 2 << std::endl;
}

void testint()
{
    std::cout << "------[test int, func = N * 2]------" << std::endl;
    {
        int arr[] = {1, 2, 3, 4, 5};
        std::cout << "test: arr = \"" << "1, 2, 3, 4, 5" << "\", Length = " << 5 << std::endl;

        iter(arr, 5, &func);
    }
    {
        int arr[] = {1, 2, 3, 4, 5};
        std::cout << "test: arr = \"" << "1, 2, 3, 4, 5" << "\", Length = " << 2 << std::endl;

        iter(arr, 2, &func);
    }
    {
        int arr[] = {1, 2, 3, 4, 5};
        std::cout << "test: arr = \"" << "1, 2, 3, 4, 5" << "\", Length = " << 0 << std::endl;

        iter(arr, 0, &func);
    }
}

void func(std::string &str)
{
    std::cout << str.append("$") << std::endl;
}

void teststr()
{
    std::cout << "------[test std::string, func = append($)]------" << std::endl;
    {
        std::string arr[] = {"abc", "def", "haha"};
        std::cout << "test: arr = \"" << "\"abc\", \"def\", \"haha\"" << "\", Length = " << 3 << std::endl;

        iter(arr, 3, &func);
        std::cout << std::endl;
    }
    {
        std::string arr[] = {"abc", "def", "haha"};
        std::cout << "test: arr = \"" << "\"abc\", \"def\", \"haha\"" << "\", Length = " << 2 << std::endl;

        iter(arr, 2, &func);
        std::cout << std::endl;
    }
    {
        std::string arr[] = {"abc", "def", "haha"};
        std::cout << "test: arr = \"" << "\"abc\", \"def\", \"haha\"" << "\", Length = " << 0 << std::endl;

        iter(arr, 0, &func);
    }
}

int main()
{
    if (MYFLAG == 1)
        testcstr();
    if (MYFLAG == 2)
        testint();
    if (MYFLAG == 3)
        teststr();
    return (0);
}

#include <string>
#include <iostream>

int main(void)
{
    std::string A = "HI THIS IS BRAIN";
    std::string *stringPTR = &A;
    std::string &stringREF = A;

    std::cout << &A << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << A << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    // *stringPTR = "XD";
    // std::cout << A << std::endl;
    // std::cout << *stringPTR << std::endl;
    // std::cout << stringREF << std::endl;

    // stringREF = "huh";
    // std::cout << A << std::endl;
    // std::cout << *stringPTR << std::endl;
    // std::cout << stringREF << std::endl;

    // std::string ontherVar = "hehe";
    // stringREF = ontherVar;
    // std::cout << A << std::endl;
    // std::cout << *stringPTR << std::endl;
    // std::cout << stringREF << std::endl;

    return 0;
}

#include "PB.hpp"

int main(void)
{
    std::string input;
    PhoneBook pb;

    while (1)
    {
        std::cout << "Please Enter Command:";
        std::cin >> input;
        if (std::cin.eof() && input == "ADD")
        {
            pb.get_contact();
        }
        else
            std::cout << "other\n";
        // else if (input == "SEARCH")
        // {

        // }
        // else if (input == "EXIT")
        // {

        // }
    }
    return (0);
}

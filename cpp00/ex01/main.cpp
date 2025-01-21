#include <iostream>
#include "MAP.hpp"


int main(void)
{
    std::string input;
    PhoneBook Phone_Book;

    while (1)
    {
        std::cout << "Please Enter Command:";
        std::cin >> input;
        if (input == "ADD")
        {
            Phone_Book.get_details();
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

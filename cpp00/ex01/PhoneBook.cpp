#include "MAP.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Welcome To Yabi Phone Book!\n";
    index = 0;

}

void PhoneBook::add_contact(void)
{
    int temp = 0;

    std::cout << "Please Enter First Name:";
    std::cin >> first_name[index];
    std::cout << "Please Enter Last Name:";
    std::cin >> last_name[index];
    std::cout << "Please Enter Nickname:";
    std::cin >> nickname[index];
    while (1)
    {
        std::cout << "Please Enter Phone Number:";
        std::cin >> phone_number;
        if (std::cin.fail())
        {
            phone_number[index] = temp;
            break ;
        }
        std::cout << "[Please Enter Number!] ";
    }
    std::cout << "Please Enter Drakest Secret::";
    std::cin >> darkest_secret[index];
    index++;
}

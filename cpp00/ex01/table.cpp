#include "PB.hpp"

void print_contact(std::string temp)
{
    int i = 0;

    while (i < 9 && temp[i])
        std::cout << temp[i++];
    if (temp[i])
        std::cout << '.';
    else
    {
        while (i < 10)
        {
            std::cout << " ";
            i++;
        }
    }
    std::cout << '|';
}

void PhoneBook::table(void)
{
    int i = -1;

    std::cout << " ___________________________________________" << std::endl;
    std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    if (flag)
    {
        while (++i < 8)
        {
            std::cout << '|';
            std::cout << i + 1 << ".        |";
            print_contact(this->contact[i].get_first_name());
            print_contact(this->contact[i].get_last_name());
            print_contact(this->contact[i].get_nickname());
            std::cout << std::endl;
        }
    }
    else
    {
        while (++i < index)
        {
            std::cout << '|';
            std::cout << i + 1 << ".        |";
            print_contact(this->contact[i].get_first_name());
            print_contact(this->contact[i].get_last_name());
            print_contact(this->contact[i].get_nickname());
            std::cout << std::endl;
        }
    }
    std::cout << "|___________________________________________|" << std::endl;
}

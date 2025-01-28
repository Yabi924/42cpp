#include "contact.hpp"
#include "PB.hpp"

int main(void)
{
    std::string input;
    PhoneBook pb;

    while (input != "EXIT")
    {
        std::cout << "Please Enter Command (ADD | SEARCH | EXIT) : ";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            pb.set_contact();
        }
        else if (input == "SEARCH")
        {
            pb.get_contact();
        }
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break ;
        }
    }
    return (0);
}

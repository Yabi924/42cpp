/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 02:54:27 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/01/28 23:58:06 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PB.hpp"
#include <limits>

PhoneBook::PhoneBook(void)
{
    index = 0;
    flag = 0;
}

void    PhoneBook::set_contact(void)
{
    std::string input;

    if (flag)
    {
        std::cout << "Warning! Will overwrite contact No." << index + 1 << std::endl;
        while (!std::cin.eof() && input == "")
        {
            std::cout << "Comfirm overwrite contact No." << index + 1 << " (y/n): ";
            std::getline(std::cin, input);
            if (input == "n")
                return ;
            else if (input != "y") 
                input = "";
            if (std::cin.eof())
                return ;
        }
    }
    input = "";
    std::cout << "now adding contact: " << index + 1 << std::endl;
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Please enter first name: ";
        if (std::getline(std::cin, input) && input != "")
            this->contact[index].set_first_name(input);
    }
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Please enter last name: ";
        if (std::getline(std::cin, input) && input != "")
            this->contact[index].set_last_name(input);       
    }
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Please enter nickname: ";
        if (std::getline(std::cin, input) && input != "")
            this->contact[index].set_nickname(input);
    }
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Please enter phone number: ";
        if (std::getline(std::cin, input) && input != "")
            this->contact[index].set_phone_number(input);       
    }
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Please enter darkest secret: ";
        if (std::getline(std::cin, input) && input != "")
            this->contact[index].set_secret(input);       
    }
    index++;
    if (index == 8)
    {
        flag++;
        index = 0;
    }
}

// void PhoneBook::get_contact(void)
// {
//     int input;

//     table();
//     std::cout << "Who do you want to search?" << std::endl << "Enter index: ";
//     std::cin >> input;
//     if (std::cin.eof())
//         return ;
//     if (input < 1 || input > 8 || std::cin.fail())
//     {
//         std::cout << "Invalid index! Please enter number between '1-8'" << std::endl;
//         std::cin.clear();
//         // std::cin.ignore();
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         return ;
//     }
//     if (input > index && flag == 0)
//     {
//         std::cout << "Empty contact!" << std::endl;
//         std::cin.ignore();
//         return ;
//     }
//     input -= 1;
    // std::cout << "First Name:" << this->contact[input].get_first_name() << std::endl;
    // std::cout << "Last Name:" << this->contact[input].get_last_name() << std::endl;
    // std::cout << "Nickname:" << this->contact[input].get_nickname() << std::endl;
    // std::cout << "Phone Number:" << this->contact[input].get_phone_number() << std::endl;
    // std::cout << "Darkest Secret:" << this->contact[input].get_secret() << std::endl;
//     std::cin.ignore();
// }


void PhoneBook::get_contact(void)
{
    std::string input = "";

    table();
    while (input == "")
    {
        std::cout << "Who do you want to search?" << std::endl << "Enter index: ";
        if (std::getline(std::cin, input) && input.size() == 1 && \
            (input[0] >= '1' && input[0] <= '8'))
        {
            if (input[0] - '0' > index && flag == 0)
            {
                std::cout << "Empty contact!" << std::endl;
                return ;
            }
            std::cout << "First Name:" << this->contact[(input[0] - '0') - 1].get_first_name() << std::endl;
            std::cout << "Last Name:" << this->contact[(input[0] - '0') - 1].get_last_name() << std::endl;
            std::cout << "Nickname:" << this->contact[(input[0] - '0') - 1].get_nickname() << std::endl;
            std::cout << "Phone Number:" << this->contact[(input[0] - '0') - 1].get_phone_number() << std::endl;
            std::cout << "Darkest Secret:" << this->contact[(input[0] - '0') - 1].get_secret() << std::endl;
        }
        else if (std::cin.eof())
            return ;
        else
        {
            std::cout << "Invalid index! Please enter number between '1-8'" << std::endl;
            input = "";
        }
    }
}

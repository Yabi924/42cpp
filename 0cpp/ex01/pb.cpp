/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:30 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:55:41 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

PhoneBook::PhoneBook(void)
{
    index = 0;
    flag = 0;
}

void    PhoneBook::add(void)
{
    std::string input("");

    while (this->flag && !std::cin.eof() && input != "y")
    {
        std::cout << "Will overwrite Contact No." << this->index + 1 << " (y/n):";
        std::getline(std::cin, input);
        if (input == "n")
            return ;
        else if (input != "y")
            input = "";
        if (std::cin.eof())
            return ;
    }
    std::cout << "Now adding contact: " << this->index + 1 << std::endl;
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Enter First Name:";
        if (std::getline(std::cin, input) && input != "")
            PhoneBook::contact[this->index].set_fn(input);
    }
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Enter Last Name:";
        if (std::getline(std::cin, input) && input != "")
            PhoneBook::contact[this->index].set_ln(input);
    }
    input = "";    while (!std::cin.eof() && input == "")
    {
        std::cout << "Enter Nickname:";
        if (std::getline(std::cin, input) && input != "")
            PhoneBook::contact[this->index].set_nm(input);
    }
    input = "";    while (!std::cin.eof() && input == "")
    {
        std::cout << "Enter Phone Number:";
        if (std::getline(std::cin, input) && input != "")
            PhoneBook::contact[this->index].set_pn(input);
    }
    input = "";
    while (!std::cin.eof() && input == "")
    {
        std::cout << "Enter Darkest Secret:";
        if (std::getline(std::cin, input) && input != "")
            PhoneBook::contact[this->index].set_ds(input);
    }
    this->index++;
    if (this->index == 8)
    {
        this->index = 0;
        this->flac++;
    }
}

void    PhoneBook::search(void)
{
    std::string input("");

    PhoneBook::table();
    if (!std::cin.eof())
    {
        std::cout << "Enter contact index:";
        if (std::getline(std::cin, input) && input.size() == 1 && \
            (input[0] >= '1' && input[0] <= '8'))
        {
            if (input[0] - '0' > this->index && !this->flag)
                std::cout << "Emtyp Contact!" << std::endl;
            else
            {
                int temp = (input[0] - '0') - 1;
                std::cout << "First Name: " << PhoneBook::contact[temp].get_fn() << std::endl;
                std::cout << "Last Name: " << PhoneBook::contact[temp].get_ln() << std::endl;
                std::cout << "Nickname: " << PhoneBook::contact[temp].get_nm() << std::endl;
                std::cout << "Phone Number: " << PhoneBook::contact[temp].get_pn() << std::endl;
                std::cout << "Darkest Secret: " << PhoneBook::contact[temp].get_ds() << std::endl;
            }
        }
        else if (std::cin.eof())
            return ;
        else
            std::cout << "Please enter number between 1-8!" << std::endl;
    }
}

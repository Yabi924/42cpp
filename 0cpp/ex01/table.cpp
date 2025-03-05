/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:37 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/04 22:51:40 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

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
            print_contact(this->contact[i].get_fn());
            print_contact(this->contact[i].get_ln());
            print_contact(this->contact[i].get_nm());
            std::cout << std::endl;
        }
    }
    else
    {
        while (++i < index)
        {
            std::cout << '|';
            std::cout << i + 1 << ".        |";
            print_contact(this->contact[i].get_fn());
            print_contact(this->contact[i].get_ln());
            print_contact(this->contact[i].get_nm());
            std::cout << std::endl;
        }
    }
    std::cout << "|___________________________________________|" << std::endl;
}
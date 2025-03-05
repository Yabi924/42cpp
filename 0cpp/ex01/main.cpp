/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:45 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/05 19:05:46 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

int main(void)
{
    PhoneBook PB;
    std::string input("");

    while (1)
    {
        input = "";
        std::cout << "PhoneBook: [ADD|SEARCH|EXIT] > ";
        std::getline(std::cin, input);
        if (!std::cin.eof() && input == "ADD")
            PB.add();
        else if (!std::cin.eof() && input == "SEARCH")
            PB.search();
        if (std::cin.eof() || input == "EXIT")
            break ;
    }
    return (0);
}
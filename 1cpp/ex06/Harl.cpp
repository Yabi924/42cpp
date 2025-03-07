/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:34:14 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:57:28 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::DEBUG(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::INFO(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::WARNING(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::ERROR(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int i = -1;
    void    (Harl::*fun[4])() = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
    std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (++i < 4)
        if (command[i] == level)
            break ;
    if (i != 4)
        std::cout << "[ "<< command[i] << " ]" << std::endl;
    switch (i)
    {
        case 0:
            (this->*fun[0])();
        case 1:
            (this->*fun[1])();
        case 2:
            (this->*fun[2])();
        case 3:
            (this->*fun[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

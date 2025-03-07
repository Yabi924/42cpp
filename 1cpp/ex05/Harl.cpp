/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:34:05 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:57:11 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::DEBUG(void)
{
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::INFO(void)
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::WARNING(void)
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::ERROR(void)
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int i = -1;
    void    (Harl::*fun[4])() = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
    std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (++i < 4)
        if (command[i] == level)
            break ;
    if (i == 4)
        std::cout << "ok" << std::endl;
    else 
        (this->*fun[i])();
}

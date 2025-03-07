/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:49 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:56:46 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): name(_name)
{
    this->club = NULL;
}

void    HumanB::attack(void)
{
    if (!this->club)
        std::cout << this->name << " haven't weapon :c" << std::endl;
    else 
        std::cout << this->name << " attacks with their " << this->club->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &_club)
{
    this->club = &_club;
}

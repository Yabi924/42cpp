/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:47 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/05 21:40:48 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_club): name(_name), club(_club){}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->club.getType() << std::endl;
}

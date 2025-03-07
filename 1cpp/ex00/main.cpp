/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:16 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:55:53 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *haha = newZombie("haha");
    haha->announce();
    delete haha;

    Zombie ZombieA("reimu");
    ZombieA.announce();

    randomChump("baka");
    return (0);
}

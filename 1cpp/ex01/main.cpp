/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:29 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:56:33 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 10;

    Zombie *omgZombie = zombieHorde(n, "miku");

    if (!omgZombie)
    {
        std::cout << "bruh" << std::endl;
        return (1);
    }
    else
        delete []omgZombie; //byebye N time
    return (0);
}

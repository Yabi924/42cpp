/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:37 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:56:17 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    if (N < 1 || !name[0])
        return (NULL);

    Zombie *newZombie = new Zombie[N];

    for (int i = 0; i < N; i++)
        newZombie[i].setName(name);
    for (int j = 0; j < N; j++)
        newZombie[j].announce();

    return (newZombie);
}

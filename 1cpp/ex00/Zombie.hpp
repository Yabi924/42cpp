/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:26 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:56:03 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

private:
    std::string name;

public:
    Zombie(std::string _name);
    ~Zombie();

    void    announce(void);
};

    Zombie *newZombie(std::string name);
    void    randomChump(std::string name);

#endif

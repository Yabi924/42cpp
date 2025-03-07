/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:40:33 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:56:25 by yyan-bin         ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    
    void    announce(void);
    void    setName(std::string _name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif

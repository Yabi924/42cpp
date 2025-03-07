/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:18:56 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:57:04 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    replace(std::string &line, std::string s1, std::string s2)
{
    std::string result;
    size_t found = line.find(s1);

    while (found != std::string::npos)
    {
        result += line.substr(0, found);
        result += s2;
        line = line.substr(found + s1.size());
        found = line.find(s1);
    }
    result += line.substr(0);
    line = result;
}

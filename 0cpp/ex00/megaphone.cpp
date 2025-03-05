/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:50 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/05 19:18:24 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void    print_upper_string(char *s)
{
    int i = 0;
    while (s[i])
        std::cout << (char)std::toupper(s[i++]);
    
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        while (argv[i])
            print_upper_string(argv[i++]);
    std::cout << std::endl;
    return (0);
}

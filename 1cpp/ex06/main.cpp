/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:34:20 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 21:57:33 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Harl.hpp"

int main(int argc, char **argv)
{
   (void)argc;
   Harl huh;

   if (argc == 2)
      huh.complain(argv[1]);
   return (0);
}

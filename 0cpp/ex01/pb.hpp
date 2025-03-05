/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:34 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/04 22:51:35 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PB_HPP
# define PB_HPP

# include "contact.hpp"

class PhoneBook
{

private:
    Contact contact[8];
    int index;
    int flag;

public:
    PhoneBook(void);
    void    add(void);
    void    search(void);
    void    table(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:32 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/04 22:53:34 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void set_fn(std::string fn);
    void set_ln(std::string ln);
    void set_nm(std::string nm);
    void set_pn(std::string pn);
    void set_ds(std::string ds);

    std::string get_fn(void);
    std::string get_ln(void);
    std::string get_nm(void);
    std::string get_pn(void);
    std::string get_ds(void);
};

#endif
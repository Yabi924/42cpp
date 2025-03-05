/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:51:28 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/04 22:51:29 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    Contact::set_fn(std::string fn)
{
    this->first_name = fn;
}

void    Contact::set_ln(std::string ln)
{
    this->last_name = ln;
}

void    Contact::set_nm(std::string nm)
{
    this->nickname = nm;
}

void    Contact::set_pn(std::string pn)
{
    this->phone_number = pn;
}

void    Contact::set_ds(std::string ds)
{
    this->darkest_secret = ds;
}

std::string Contact::get_fn(void)
{
    return (this->first_name);
}

std::string Contact::get_ln(void)
{
    return (this->last_name);
}

std::string Contact::get_nm(void)
{
    return (this->nickname);
}

std::string Contact::get_pn(void)
{
    return (this->phone_number);
}

std::string Contact::get_ds(void)
{
    return (this->darkest_secret);
}
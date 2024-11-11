/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:39:08 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:36:19 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::set_contact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds)
{
    first_name = fn;
    last_name = ln;
    nickname = nn;
    phone_number = pn;
    darkest_secret = ds;
}

void Contact::display_summary(int index) const
{
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << truncate(first_name) << "|"
              << std::setw(10) << truncate(last_name) << "|"
              << std::setw(10) << truncate(nickname) << std::endl;
}

void Contact::display_full() const
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

std::string Contact::truncate(const std::string& str) const
{
    return str.length() > 10 ? str.substr(0, 9) + "." : str;
}

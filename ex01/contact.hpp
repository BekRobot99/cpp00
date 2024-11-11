/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:38:42 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:35:50 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact 
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void set_contact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds);
    void display_summary(int index) const;
    void display_full() const;

private:
    std::string truncate(const std::string& str) const;
};

#endif

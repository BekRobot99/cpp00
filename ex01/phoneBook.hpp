/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:39:36 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:43:33 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <array>

class PhoneBook
{
private:
    std::array<Contact, 8> contacts;
    int contact_count = 0;

public:
    void add_contact(const Contact& contact);
    void display_contacts() const;
    void display_contact(int index) const;
};

#endif

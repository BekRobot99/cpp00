/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:30:19 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:34:37 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::add_contact(const Contact& contact)
{
    contacts[contact_count % 8] = contact;
    contact_count++;
}


void PhoneBook::display_contacts() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (int i = 0; i < std::min(contact_count, 8); ++i) {
        contacts[i].display_summary(i);
    }
}


void PhoneBook::display_contact(int index) const
{
    if (index < 0 || index >= std::min(contact_count, 8)) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    contacts[index].display_full();
}

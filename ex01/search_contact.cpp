/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:40:17 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:41:53 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include <iostream>

void search_contact(const PhoneBook& phonebook)
{
    phonebook.display_contacts();

    std::cout << "Enter the index of the contact to view: ";
    int index;
    std::cin >> index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    phonebook.display_contact(index);
}

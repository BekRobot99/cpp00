/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:40:32 by abekri            #+#    #+#             */
/*   Updated: 2024/11/06 17:35:21 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

void search_contact(const PhoneBook& phonebook);

int main()
{
    PhoneBook phonebook;
    std::string command;

    std::cout << "Welcome to the Crappy Awesome PhoneBook!" << std::endl;
    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            Contact new_contact;
            std::string first_name, last_name, nickname, phone_number, darkest_secret;

            std::cout << "Enter first name: ";
            std::getline(std::cin, first_name);
            std::cout << "Enter last name: ";
            std::getline(std::cin, last_name);
            std::cout << "Enter nickname: ";
            std::getline(std::cin, nickname);
            std::cout << "Enter phone number: ";
            std::getline(std::cin, phone_number);
            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, darkest_secret);

            if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty()) {
                std::cout << "All fields are required. Contact not added." << std::endl;
            } else {
                new_contact.set_contact(first_name, last_name, nickname, phone_number, darkest_secret);
                phonebook.add_contact(new_contact);
                std::cout << "Contact added!" << std::endl;
            }

        } else if (command == "SEARCH") {
            search_contact(phonebook);

        } else if (command == "EXIT") {
            std::cout << "Exiting the program. Goodbye!" << std::endl;
            break;

        } else {
            std::cout << "Unknown command. Please try again." << std::endl;
        }
    }

    return 0;
}

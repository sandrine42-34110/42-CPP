/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:46:31 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/06 17:49:22 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbContacts(0)
{}

PhoneBook::~PhoneBook()
{}

//Fonction pour ajouter un contact
void	PhoneBook::addContact()
{
	Contact		newContact;
	std::string	input;
	
	std::cout << "Enter First Name : ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter Last Name : ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter Nickname : ";
	std::getline(std::cin, input);
	newContact.setNickName(input);

	std::cout << "Enter Phone Number : ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter Darkest Secret : ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	int			index = _nbContacts % 8;
	_contacts[index] = newContact;
	_nbContacts++;

	std::cout << "Contact added successfully !" << std::endl;

}
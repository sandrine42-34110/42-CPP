/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:46:31 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/07 14:49:21 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
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

std::string		PhoneBook::truncateString(const std::string &str)const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}


void	PhoneBook::searchContact()
{
	int		maxContacts;

	// maxContacts = (_nbContacts < 8) ? _nbContacts :8;
 	if (_nbContacts < 8)
		maxContacts = _nbContacts;
	else
		maxContacts = 8;

	if (maxContacts == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << "|" << std::endl;
			  


	for (int i = 0; i < maxContacts; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << truncateString(_contacts[i].getFirstName()) << "|"
				  << std::setw(10) << truncateString(_contacts[i].getLastName()) << "|"
				  << std::setw(10) << truncateString(_contacts[i].getNickName()) << "|" << std::endl;
			  
		// std::getline(std::cin, input);
		// newContact.setContact(input);
		
	}
}
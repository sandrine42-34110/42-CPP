/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:46:31 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/16 10:30:10 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbContacts(0), _index(0)
{}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::addContact()
{
	Contact		newContact;
	std::string	input;
	
	std::cout << "Enter First Name : ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "First Name cannot be empty. Please try again." << std::endl;
		return ;
	}
	newContact.setFirstName(input);

	std::cout << "Enter Last Name : ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Last Name cannot be empty. Please try again." << std::endl;
		return ;
	}
	newContact.setLastName(input);

	std::cout << "Enter Nickname : ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Nickname cannot be empty. Please try again." << std::endl;
		return ;
	}
	newContact.setNickName(input);

	std::cout << "Enter Phone Number : ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Phone Number cannot be empty. Please try again." << std::endl;
		return ;
	}
	newContact.setPhoneNumber(input);

	std::cout << "Enter Darkest Secret : ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Darkest Secret cannot be empty. Please try again." << std::endl;
		return ;
	}
	newContact.setDarkestSecret(input);
	_contacts[_index] = newContact;
	if(_nbContacts < 8)
	{
		_nbContacts++;
	}
	_index = (_index + 1) % 8;
	std::cout << "Contact added successfully !" << std::endl;
}

std::string		PhoneBook::truncateString(const std::string &str)const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::displayContacts(int maxContacts) const
{
	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << "|" << std::endl;

	for (int i = 0; i < maxContacts; i++)
	{
		int	realIndex = (_index + i) % 8;
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << truncateString(_contacts[realIndex].getFirstName()) << "|"
				  << std::setw(10) << truncateString(_contacts[realIndex].getLastName()) << "|"
				  << std::setw(10) << truncateString(_contacts[realIndex].getNickName()) << "|" << std::endl;
	}
}

int		PhoneBook::askContactIndex(int maxContacts) const
{
	std::string	input;
	std::cout << "Enter the index of the contact to be displayed : " << std::endl;
	std::getline(std::cin, input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cerr << "Invalid index ! " << std::endl;
		return (-1);
	}
	int	index = input[0] - '0'; // transforme le caractere input en entier
	if (index < 0 || index >= maxContacts)
	{
		std::cerr << "Index is out of range." << std::endl;
		return (-1);
	}
	return (index);
}

void	PhoneBook::displayContactDetails(int index) const
{
	int realIndex = (_index + index) % 8;
	std::cout << "First name : " << _contacts[realIndex].getFirstName() << std::endl;
	std::cout << "Last name : " << _contacts[realIndex].getLastName() << std::endl;
	std::cout << "Nickname : " << _contacts[realIndex].getNickName() << std::endl;
	std::cout << "Phone number : " << _contacts[realIndex].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << _contacts[realIndex].getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContact()
{
	int		maxContacts;
	int		index;
	
 	if (_nbContacts < 8)
		maxContacts = _nbContacts;
	else
		maxContacts = 8;

	if (maxContacts == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	displayContacts(maxContacts);
	index = askContactIndex(maxContacts);
	if (index == -1)
		return ;
	displayContactDetails(index);
}
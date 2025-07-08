/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:52:55 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/08 11:40:21 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"


int main (void)
{
	std::cout << "* Welcome to PhoneBook ! *\n\n";
	std::cout << "To register a new contact, use ADD.\n";
	std::cout << "To display the requested contact , use SEARCH.\n";
	std::cout << "To exit the program, use EXIT.\n";
	 
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			phoneBook.addContact();
		}
		else if (command == "SEARCH")
		{
			phoneBook.searchContact();
		}
		else if (command == "EXIT")
		{
			std::cout << "Goodbye!\n";
			break;
		}
		else
		{
			std::cout << "Unknown command. Try ADD, SEARCH, or EXIT.\n";
		}
	}
	return (0);
}
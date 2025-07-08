/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:52:55 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/08 15:04:07 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"


int main (void)
{
	std::cout << "* Welcome to PhoneBook ! *" << std::endl << std::endl;
	std::cout << "To register a new contact, use ADD." << std::endl;
	std::cout << "To display the requested contact , use SEARCH." << std::endl;
	std::cout << "To exit the program, use EXIT." << std::endl;
	 
	PhoneBook 	phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);

		if (std::cin.eof())
			break;
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
			std::cout << "Goodbye!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Unknown command. Try ADD, SEARCH, or EXIT." << std::endl;
		}
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:18:46 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/06 16:39:17 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

// Constructeur
Contact::Contact()
{}

// Destructeur
Contact::~Contact()
{}

/*Getters - Recuperent la valeur d un attribut */

std::string	Contact::getFirstName() const
{
	return this->_firstName;
}

std::string	Contact::getLastName() const
{
	return this->_lastName;
}

std::string	Contact::getNickName() const
{
	return this->_nickName;
}

std::string	Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return this->_darkestSecret;

}	

//setFirstName assigne la valeur du prenom au membre _firstName
void	Contact::setFirstName(const std::string &FirstName)
{
	this->_firstName = FirstName;
}

void	Contact::setLastName(const std::string &LastName)
{
	this->_lastName = LastName;
}

void	Contact::setNickName(const std::string &NickName)
{
	this->_nickName = NickName;
}

void	Contact::setPhoneNumber(const std::string &PhoneNumber)
{
	this->_phoneNumber = PhoneNumber;
}

void	Contact::setDarkestSecret(const std::string &DarkestSecret)
{
	this->_darkestSecret = DarkestSecret;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:11:22 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/18 11:03:56 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

// Constructeur
HumanB::HumanB(const std::string& name) : _name(name), _weapon (NULL)
{}

// Destructeur
HumanB::~HumanB()
{}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << "  attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << "  has no weapon." << std::endl;

}

void HumanB::setName(const std::string& name)
{
	_name = name;
}

void HumanB::setWeapon(const Weapon& weapon)
{
	_weapon = &weapon;   //on stocke l adresse
}



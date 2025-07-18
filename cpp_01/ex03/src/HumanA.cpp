/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:11:22 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/18 11:03:35 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

// Constructeur
HumanA::HumanA(const std::string& name, Weapon& Weapon) : _name(name), _weapon(Weapon)
{}

// Destructeur
HumanA::~HumanA()
{}

void HumanA::attack() const
{
	std::cout << _name << "  attacks with their " << _weapon.getType() << std::endl;
}

void HumanA::setName(const std::string& name)
{
	_name = name;
}

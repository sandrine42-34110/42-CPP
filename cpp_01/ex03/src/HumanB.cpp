/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:11:22 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/17 14:52:30 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

// Constructeur
HumanA::HumanA(std::string name) : _name(name)
{}

HumanA::HumanA()
{}

// Destructeur
HumanA::~HumanA()
{
	std::cout << "HumanA " << _name << "  attacks with their " <<  << std::endl;
}

const std::string& getType() const
{
	return &_type;
}

void 	Weapon::setType(std::string type)
{
	_type = type;
}

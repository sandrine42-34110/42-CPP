/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:11:22 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/17 14:28:41 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructeur
Weapon::Weapon(const std::string& type) : _type(type)
{}

// Destructeur
Weapon::~Weapon()
{
}

const	std::string& Weapon::getType() const
{
	return _type;
}

void 	Weapon::setType(const std::string& type)
{
	_type = type;
}

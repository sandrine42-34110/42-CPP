/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:11:22 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/16 15:39:17 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

// Constructeur
Zombie::Zombie(std::string name) : _name(name)
{}

Zombie::Zombie()
{}

// Destructeur
Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is destroyed !" << std::endl;
}

// Methode announce()
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void 	Zombie::setName(std::string name)
{
	_name = name;
}

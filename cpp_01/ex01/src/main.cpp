/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:10:41 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/15 16:30:30 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void 	randomChump(std::string name);

int	main(void)
{
	Zombie* team1 = newZombie("Foo");
	team1->announce();
	delete team1;
	
	randomChump("Blublu");
	
	Zombie* team2 = newZombie("Zoo");
	team2->announce();
	
	randomChump("Blabla");
	
	delete team2;
	return (0);
}
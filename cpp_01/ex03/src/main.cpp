/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:10:41 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/16 16:14:18 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{

	std::cout << "--- Test N = 5 ---" << std::endl;
	int N = 5;
	
	Zombie* horde = zombieHorde(N, "Foo");
	
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete []horde;

	std::cout << std::endl;
	std::cout << "--- Test N = 0 ---" << std::endl;
	N = 0;
	
	Zombie* emptyHorde = zombieHorde(N, "Nobody");
	
	for (int i = 0; i < N; i++)
	{
		emptyHorde[i].announce();
	}
	delete []emptyHorde;

	std::cout << std::endl;
	std::cout << "--- Test N = 3 ---" << std::endl;
	N = 3;
	
	Zombie* secondHorde = zombieHorde(N, "Boo");
	
	for (int i = 0; i < N; i++)
	{
		secondHorde[i].announce();
	}
	delete []secondHorde;
	return (0);
}
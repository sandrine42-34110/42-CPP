/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:11:52 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/15 16:00:24 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

// Allocates a zombie on the heap and returns a pointer to it
Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}
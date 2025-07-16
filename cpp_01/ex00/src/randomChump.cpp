/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:13:33 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/15 15:59:14 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"


// Creates a stack-allocated zombie, makes its announce, then it's automatically destroyed
void randomChump(std::string name)
{
	Zombie z (name);
	z.announce();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:14:09 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/17 15:10:59 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string& name);
		~HumanB();
	
		void attack() const;
		void setName(const std::string& name);
		void setWeapon(const Weapon& weapon);

	private:
		std::string	_name;				// attribut prive
		Weapon*		_weapon;			// pointeur car HumanB n est pas tj arme
};

#endif
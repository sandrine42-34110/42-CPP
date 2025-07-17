/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:14:09 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/17 15:26:30 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"


class HumanA
{
	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();
	
		void attack() const;
		void setName(const std::string& name);

	private:
		std::string	_name;				// attribut prive
		Weapon&		_weapon;			// reference car HumanA est tj arme
};

#endif
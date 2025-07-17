/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:14:09 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/17 11:51:15 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		Weapon(const std::string &type); // initialisation de l arme avc un type des sa creation
		~Weapon();
	
		const std::string& getType() const;
		void setType(const std::string& type);

	private:
		std::string _type;
};

#endif
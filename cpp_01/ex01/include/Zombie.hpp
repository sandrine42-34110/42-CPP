/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:14:09 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/16 15:22:17 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();								// constructeur par defaut pour creation objet sans argument
		Zombie(std::string name);
		~Zombie();
	
		void announce(void);					// methode publique
		void setName(std::string name);

	private:
		std::string _name;						// attribut prive
};

#endif
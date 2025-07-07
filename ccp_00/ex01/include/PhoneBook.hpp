/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:18:46 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/07 14:40:25 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void		addContact();
		void		searchContact();
		
	private:
		Contact		_contacts[8];
		int			_nbContacts;
		
		std::string		truncateString(const std::string &str)const;

};

#endif


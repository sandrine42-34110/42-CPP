/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:18:46 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/16 10:20:48 by sapupier         ###   ########.fr       */
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
		
		void			addContact();
		void			searchContact();
		
	private:
		void			displayContacts(int maxContacts) const;
		int				askContactIndex(int maxContacts) const;
		void			displayContactDetails(int index) const;

		Contact			_contacts[8];
		int				_nbContacts;
		int				_index;
		std::string		truncateString(const std::string &str)const;
};

#endif


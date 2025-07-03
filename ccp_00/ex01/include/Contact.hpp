/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:18:46 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/03 16:51:19 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickname() const;
		std::string		getPhoneNumber() const;
		std::string		getDarkestSecret() const;

		void			setFirstName(const std::string &fname);
		void			setLastName(const std::string &lname);
		void			setNickname(const std::string &nname);
		void			setPhoneNumber(const std::string &pnumber);
		void			setDarkestSecret(const std::string &dsecret);
		
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
};

#endif


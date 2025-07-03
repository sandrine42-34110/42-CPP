/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:46:31 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/03 15:11:12 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			std::string str=argv[i];
			for(std::string::size_type j = 0; j < str.length(); j++)
				std::cout << (char)std::toupper(str[j]);
		}
		std::cout << std:: endl;
	}
	return (0);
}
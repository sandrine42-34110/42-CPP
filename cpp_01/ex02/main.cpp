/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:10:41 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/17 11:09:49 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << "The memory address of the string variable : " << &variable << std::endl;
	std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      : " << &stringREF <<std::endl;

	std::cout << std::endl;
	std::cout << "The value of the string variable          : " << variable << std::endl;
	std::cout << "The value pointed by stringPTR            : " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF            : " << stringREF <<std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Account.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:24:43 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/09 08:21:08 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

#define BLUE	"\033[34m"
#define RESET   "\033[0m"

int	_nbAccounts = 0;
int	_totalAmount = 0;
int _totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

//Constructor
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	++_nbAccounts;
	_totalAmount += initial_deposit;
	_displayTimestamp ();
	std::cout << "index:" << BLUE << _accountIndex << RESET 
			  << ";amount" << BLUE << _amount << RESET
			  << ";created" << std::endl;
}

//Destructor
Account::~Account()
{
	
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

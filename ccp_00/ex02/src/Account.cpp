/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapupier <sapupier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:24:43 by sapupier          #+#    #+#             */
/*   Updated: 2025/07/09 13:14:47 by sapupier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

#define BLUE	"\033[38;5;117m"
#define RESET   "\033[0m"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	_displayTimestamp ();
	std::cout << "index:" << BLUE << _accountIndex << RESET 
			  << ";amount:" << BLUE << _amount << RESET
			  << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);
	std::tm 	*ltm = std::localtime(&now);
	
	std::cout << "["
			  << 1900 + ltm->tm_year
			  << std::setw(2) << std::setfill('0') << ltm->tm_mon + 1
			  << std::setw(2) << std::setfill('0') << ltm->tm_mday
			  << "_"
			  << std::setw(2) << std::setfill('0') << ltm->tm_hour
			  << std::setw(2) << std::setfill('0') << ltm->tm_min
			  << std::setw(2) << std::setfill('0') << ltm->tm_sec
			  <<  "]";
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

/*methode 'static' : necessite de l appeler avc le nom de la classe*/
void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << BLUE << _nbAccounts << RESET 
			  << ";total:" << BLUE << _totalAmount << RESET
			  << ";deposits:" << BLUE << _totalNbDeposits << RESET
			  << ";withdrawals:" << BLUE << _totalNbWithdrawals << RESET
			  << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	std::cout << "index:" << BLUE << _accountIndex << RESET
			  << ";p_amount:" << BLUE << _amount - deposit << RESET
			  << ";deposit:" << BLUE << deposit << RESET
			  << ";amount:" << BLUE << _amount << RESET
			  << ";nb_deposit:" << BLUE << _nbDeposits << RESET
			  << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	
	if (withdrawal > _amount)
	{
		std::cout << "index:" << BLUE << _accountIndex << RESET
		<< ";p_amount:" << BLUE << _amount << RESET
		<< ";withdrawal:refused"
		<< std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << BLUE << _accountIndex << RESET
				<< ";p_amount:" << BLUE << _amount + withdrawal << RESET
				<< ";withdrawal:" << BLUE << withdrawal << RESET
				<< ";amount:" << BLUE << _amount << RESET
				<< ";nb_withdrawals:" << BLUE << _nbWithdrawals << RESET
				<< std::endl;
	}
	return (true);
}

/*Retourne la valeur de l attibut prive _amount (solde du compte)*/
int		Account::checkAmount(void) const
{
	return (_amount);
}

/* methode d instance (non statique) qui affiche le statut actuel*/
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET
			  << ";amount:" << BLUE << checkAmount() << RESET
			  << ";deposits:" << BLUE << _nbDeposits << RESET
			  << ";withdrawals:" << BLUE << _nbWithdrawals << RESET
			  << std::endl;
}


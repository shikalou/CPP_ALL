/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:12:16 by ldinaut           #+#    #+#             */
/*   Updated: 2022/09/21 23:00:26 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :_amount(initial_deposit)
{
	_accountIndex = _nbAccounts;
	_totalAmount+=initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";"<< "deposit:" << deposit << ";";
	_amount+=deposit;
	std::cout << "amount:" << _amount << ";";
	_totalAmount+=deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
	if (_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_amount-=withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount-=withdrawal;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	//std::cout << "[19920104_091532] ";
	char buffer[19] = {0};
	std::time_t t;
	std::tm* now;
	
	t = std::time(0);
	now = std::localtime(&t);
	//std::cout << (now->tm_year + 1900) 
	//std::cout << "[" << (now->tm_year) << 
	strftime(buffer, 19, "[%Y%m%d_%H%M%S] ", now);
	std::cout << buffer;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
}
/************************/
/********GETERS**********/
/************************/

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

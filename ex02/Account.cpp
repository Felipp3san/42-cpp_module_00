/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:34:01 by fde-alme          #+#    #+#             */
/*   Updated: 2025/11/16 16:11:18 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_nbAccounts++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << initial_deposit << ";"
		<< "created" << std::endl;
};

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
};

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "deposit:" << deposit << ";";

	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	std::cout << "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits
		<< std::endl;
};

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";";

	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;

	std::cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" << _amount << ";"
		<< "_nbWithdrawals:" << _nbWithdrawals
		<< std::endl;

	return (true);
};

int	Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals
		<< std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		timestamp;
	struct tm	dt;

	timestamp = time(&timestamp);
	dt = *localtime(&timestamp);

	std::cout << '['
		<< 1900 + dt.tm_year << dt.tm_mon << dt.tm_mday
		<< '_'
		<< dt.tm_hour << dt.tm_min << dt.tm_sec
		<< "] ";
}

Account::Account(void)
{};

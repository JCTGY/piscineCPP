/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:56:53 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/10 15:25:18 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {

}

Account::Account(int initial_deposits) {
	
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposits;
	_amount = initial_deposits;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposits << ";created" <<  std::endl;
}

Account::~Account(void) {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
		<< ";closed" <<std::endl;
}

void Account::makeDeposit(int deposits) {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount 
		<< ";deposit:" << deposits;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposits;
	_totalAmount += deposits;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	if (_amount >= withdrawal){
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int Account::checkAmount(void) const {
	return (_amount);

}

void Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount 
		<< ";deposits:" <<  _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl; 
}


int Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (_totalAmount);
}

int Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {

	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" <<
	   	_totalAmount << ";deposits:" << _totalNbDeposits <<
	   	";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {

	std::time_t t = std::time(nullptr);
	std::cout << std::put_time(std::localtime(&t), "[%Y%m%d_%H%M%S]");
}


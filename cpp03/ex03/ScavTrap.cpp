/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:05:52 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 18:37:58 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	// std::cout << "ScavTrap default constructor called" << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}

ScavTrap::ScavTrap(std::string &n) : ClapTrap(n) {
	// std::cout << "ScavTrap constructor called with string" << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
	// std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name;
	std::cout << " destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
	ClapTrap::operator=(obj);
	return *this;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap <" << name
	<< "> have enterred in Gate kepper mode." << std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	if (HP == 0)
	{
		std::cout << "ScavTrap <" << name << "> can't attack, because it's already destroy" << std::endl;
	}
	std::cout << "ScavTrap <" << name
	<< "> attack <" << target << ">, causing <"
	<< AD << "> points of damage !" << std::endl;
}
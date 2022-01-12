/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:17:37 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 18:26:46 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	// std::cout << "DiamondTrap defalt constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &n) : ClapTrap(n), FragTrap(n), ScavTrap(n) {
	// std::cout << "DiamondTrap constructor called with string" << std::endl;
	DiaName = n;
	ClapTrap::name = n + "_clap_name";
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {
	// std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap() {
	// std::cout << "FragTrap " << DiaName;
	// std::cout << " destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) {
	ClapTrap::operator=(obj);
	this->DiaName = obj.DiaName;
	return *this;
}

void	DiamondTrap::whoAMI() {
	std::cout << "My name is <" << DiaName << ">" << std::endl;
	std::cout << "ClapTrap name is <" << ClapTrap::name << ">" << std::endl;
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}
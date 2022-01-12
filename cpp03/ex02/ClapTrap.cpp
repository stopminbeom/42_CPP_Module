/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:51:51 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 16:45:44 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(int hp, int ep, int ad) : HP(hp), EP(ep), AD(ad) {
	std::cout << "constructor called with 3 int" << std::endl;
}

ClapTrap::ClapTrap(std::string &n, int hp, int ep, int ad) : name(n), HP(hp), EP(ep), AD(ad) {
	std::cout << "constructor called with 3 int" << std::endl;
}

ClapTrap::ClapTrap(std::string &n) :  name(n), HP(10), EP(10), AD(0) {
	std::cout << "constructor called with string" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name;
	std::cout << " destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
	std::cout << "Assignation operator called" << std::endl;
	this->name = obj.name;
	this->AD = obj.AD;
	this->HP = obj.HP;
	this->EP = obj.EP;
	return *this;
}

void	ClapTrap::attack(std::string const & target) {
	if (HP == 0)
	{
		std::cout << "ClapTrap <" << name << "> can't attack, because it's already destroy" << std::endl;
	}
	std::cout << "ClapTrap <" << name
	<< "> attack <" << target << ">, causing <"
	<< AD << "> points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap <" << name
	<< "> take <" << amount << "> points of damage !" << std::endl;
	if (HP > 0)
	{
		HP = HP - amount;
		if (HP < 0)
			HP = 0;
		std::cout << name << "'s HP = " << HP << std::endl;
		if (HP == 0)
			std::cout << "ClapTrap <" << name << "> is destroy" << std::endl;
	}
	else
		std::cout << "ClapTrap <" << name << "> is already destroy" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	HP = HP + amount;
	std::cout << "ClapTrap <" << name
	<< "> is repaired <" << amount << "> points." << std::endl;
	std::cout << name << "'s HP = " << HP << std::endl;
}

std::string	ClapTrap::getName() {
	return name;
}
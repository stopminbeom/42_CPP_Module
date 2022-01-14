/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:52:46 by mseo              #+#    #+#             */
/*   Updated: 2022/01/14 15:38:44 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	// std::cout << "FragTrap defalut constructor called" << std::endl;
	HP = 100;
	EP = 100;
	AD = 30;
}

FragTrap::FragTrap(std::string &n) {
	// std::cout << "FragTrap constructor called with string" << std::endl;
	name = n;
	HP = 100;
	EP = 100;
	AD = 30;
}

FragTrap::FragTrap(const FragTrap& obj) {
	// std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	// std::cout << "FragTrap " << name;
	// std::cout << " destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
	ClapTrap::operator=(obj);
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap <" << name << "> say : "
	<< "Hey, Guys! HighFive with me!" << std::endl;
}
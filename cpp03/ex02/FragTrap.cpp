/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:52:46 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 17:53:06 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30) {
	std::cout << "FragTrap defalut constructor called" << std::endl;
}

FragTrap::FragTrap(std::string &n) : ClapTrap(n, 100, 100, 30) {
	std::cout << "FragTrap constructor called with string" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name;
	std::cout << " destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
	ClapTrap::operator=(obj);
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap <" << name << "> say : "
	<< "Hey, Guys! HighFive with me!" << std::endl;
}
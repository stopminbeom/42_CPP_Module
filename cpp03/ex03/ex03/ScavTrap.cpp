/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/09 22:20:30 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called\n";
	HP = 1;
	EP = 2;
	AD = 3;
}

ScavTrap::ScavTrap(const std::string& Name)
{
	std::cout << "ScavTrap constructor with name \' " << Name << " \' called\n";
	HP = 1;
	EP = 2;
	AD = 3;
		std::cout << this->HP << this->EP << this->AD << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& otherObj):ClapTrap(otherObj)
{
	*this = otherObj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " Destructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& otherObj)
{
	ClapTrap::operator=(otherObj);
	HP = otherObj.HP;
	EP = otherObj.EP;
	AD = otherObj.AD;
	return *this;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap < " << Name << " > attack < " << target << " >, causing < " << AD << " > points of damage!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap < " << Name << " > have enterred in Gate keeper mode.\n";
	EP = EP - 1;
}


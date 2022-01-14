/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:32 by ylee              #+#    #+#             */
/*   Updated: 2022/01/10 02:06:29 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap Default Constructor called\n";
}

// ClapTrap::ClapTrap(const int& hp, const int& ep, const int& ad) : HP(hp), EP(ep), AD(ad)
// {
// 	std::cout << "ClapTrap Default Constructor called\n";
// }

ClapTrap::ClapTrap(const std::string& Name): Name(Name), HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap Constructor with Name \' " << Name << " \' called\n";
	std::cout << HP << EP << AD << std::endl;
}

// ClapTrap::ClapTrap(const std::string& Name, const int& hp, const int& ep, const int& ad) : Name(Name), HP(hp), EP(ep), AD(ad)
// {
// 	std::cout << "ClapTrap Constructor with Name \' " << Name << " \' called\n";
// }

ClapTrap::ClapTrap(const ClapTrap& otherObj)
{
	std::cout << "ClapTrap Copy Constructor called\n";
	*this = otherObj;
	Name = Name + "_copy";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " Destructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& otherObj)
{
	std::cout << "ClapTrap Assignation operator called\n";
	Name = otherObj.Name;
	HP = otherObj.HP;
	EP = otherObj.EP;
	AD = otherObj.AD;
	return *this ;
}

void	ClapTrap::attack(std::string const & target)
{
	if (HP == 0)
	{
		std::cout << "ClapTrap < " << Name << " > "
		<< "cannot attack < " << target << " >, because ClapTrap < " << Name << " > was destroyed.\n";
		return ;
	}
	std::cout << "ClapTrap < " << Name << " > "
	<< "attack < " << target << " >, "
	<< "causing < " << AD << " > points of damage!\n";
	if (AD == 0)
		std::cout << "......It cannot attack.....T.T\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "< " << Name << " > "
	<< "takes < " << amount << " > points of damage!\n";
	if (HP > 0)
	{
		HP = HP - amount;
		if (HP < 0)
			HP = 0;
		std::cout << "Now < " << Name << " >'s HP is < "
		<< HP << " >\n";
		if (HP == 0)
			std::cout << "< " << Name << " > is destroyed.\n";
	}
	else
	{
		std::cout << "< " << Name << " > was destroyed already...T.T\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	HP = HP + amount;
	std::cout << "< " << Name << " > "
	<< "is repaired < " << amount << " > points.\n"
	<< "Now < " << Name << " >'s HP is < "
	<< HP << " >\n";
}


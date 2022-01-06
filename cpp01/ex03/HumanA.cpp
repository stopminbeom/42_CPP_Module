/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:35:42 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 02:27:29 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Aname, Weapon &weapon)
{
	this->name = Aname;
	this->A_weapon = weapon;
};

HumanA::~HumanA()
{
};

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << std::endl;
};
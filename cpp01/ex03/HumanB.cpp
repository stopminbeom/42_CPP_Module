/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 02:20:56 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 16:28:36 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Bname)
{
	name = Bname;
};

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << B_weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon &club)
{
	B_weapon = &club;
}
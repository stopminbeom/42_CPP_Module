/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:35:42 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 16:24:09 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Aname, Weapon &club):A_weapon(club)
{
	name = Aname;
};

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << A_weapon.getType() << std::endl;
};
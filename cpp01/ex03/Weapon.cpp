/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:46:11 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 16:29:53 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	this->type = weapon_type;
};

std::string	Weapon::getType(void)
{
	if (type.empty())
		return ("No weapon");
	else
		return (type);
};

void	Weapon::setType(std::string weapon_type)
{
	this->type = weapon_type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 02:18:08 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 02:20:33 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	std::string	name1 = "mseo";
	std::string	name2 = "inyang";
	std::string	type1 = "stick";
	std::string	type2 = "gun";

	Weapon	weapon1(type1);
	Weapon	weapon2(type2);

	HumanA	A(name1, weapon1);
}
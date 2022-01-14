/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:40:51 by mseo              #+#    #+#             */
/*   Updated: 2022/01/14 16:16:09 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::string PlayerA = "Sans";
	DiamondTrap	A(PlayerA);

	A.attack("Random people");
	A.takeDamage(30);
	A.beRepaired(10);
	A.guardGate();
	A.highFivesGuys();
	A.whoAMI();
	return 0;
}
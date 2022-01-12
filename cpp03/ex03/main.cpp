/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:40:51 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 18:12:39 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::string PlayerA = "Sans";
	std::string PlayerB = "Papyrus";
	DiamondTrap	A(PlayerA);
	DiamondTrap	B;
	
	B = DiamondTrap(PlayerB);

	A.attack(PlayerB);
	B.takeDamage(20);
	B.beRepaired(3);
	B.attack(PlayerA);
	A.takeDamage(30);
	A.beRepaired(10);

	A.guardGate();
	A.highFivesGuys();
	B.guardGate();
	B.highFivesGuys();

	A.whoAMI();
	B.whoAMI();
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:40:51 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 16:49:58 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string PlayerA = "Sans";
	std::string PlayerB = "Papyrus";
	ScavTrap	A(PlayerA);
	ScavTrap	B;
	B = ScavTrap(PlayerB);

	A.attack(PlayerB);
	B.takeDamage(20);
	B.beRepaired(3);
	B.attack(PlayerA);
	A.takeDamage(20);
	A.beRepaired(10);

	A.guardGate();
	B.guardGate();
	return 0;
}
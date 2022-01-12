/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:40:51 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 17:02:47 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string PlayerA = "Sans";
	std::string PlayerB = "Papyrus";
	ScavTrap	A(PlayerA);
	FragTrap	B;
	B = FragTrap(PlayerB);

	A.attack(PlayerB);
	B.takeDamage(20);
	B.beRepaired(3);
	B.attack(PlayerA);
	A.takeDamage(30);
	A.beRepaired(10);

	A.guardGate();
	B.highFivesGuys();

	return 0;
}
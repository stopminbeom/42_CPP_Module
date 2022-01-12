/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:40:51 by mseo              #+#    #+#             */
/*   Updated: 2022/01/12 16:01:09 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string PlayerA = "Sans";
	std::string PlayerB = "Papyrus";
	ClapTrap	A(PlayerA);
	ClapTrap	B;
	B = ClapTrap(PlayerB);

	A.attack(PlayerB);
	B.takeDamage(5);
	B.beRepaired(3);
	B.attack(PlayerA);
	A.takeDamage(3);
	A.beRepaired(10);
	return 0;
}
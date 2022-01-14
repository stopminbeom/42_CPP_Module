/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:05:04 by ylee              #+#    #+#             */
/*   Updated: 2022/01/10 03:02:57 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	// std::cout << "...... NOW LOARDING ......\n";
	// ClapTrap	ct1("CT1");
	// ClapTrap	ct2;
	// ct2 = ClapTrap("CT2");
	// ClapTrap ct3(ct1);

	// std::cout << "\n<< PLAY >>\n";
	// ct1.attack("enemy1");
	// ct1.takeDamage(7);
	// ct2.takeDamage(3);
	// ct3.attack("enemy2");
	// ct2.beRepaired(1);
	// ct3.takeDamage(8);
	// ct2.attack("enemy1");
	// ct2.takeDamage(7);
	// ct1.attack("enemy2");
	// ct1.takeDamage(8);
	// ct3.beRepaired(1);
	// ct2.beRepaired(1);
	// ct1.attack("enemy1");
	// ct1.takeDamage(7);
	// ct2.attack("enemy1");
	// ct2.takeDamage(7);
	// ct3.attack("enemy1");
	// ct3.takeDamage(7);

	// std::cout << "\n\" Oh!! Serena, my love!! I save you!!! \"\n\n";
	// ScavTrap	st1("ST1");
	// std::cout << std::endl;
	// st1.guardGate();
	// st1.takeDamage(5);
	// st1.attack("enemy1");
	// st1.takeDamage(10);
	// st1.attack("enemy2");
	// st1.takeDamage(10);
	// std::cout << "\n\" All ScavTraps!! HELP ME!!! \"\n\n";
	// ScavTrap	st2("ST2");
	// ScavTrap	st3(st1);
	// std::cout << std::endl;
	// st2.guardGate();
	// st3.guardGate();
	// st1.beRepaired(10);
	// st1.guardGate();

	// std::cout << "\n\"We need more helpers. When will FragTraps come???\n\n";
	// std::cout << "??? : \"Here!! We are!!!\"\n";
	// FragTrap	ft1("FT1");
	// FragTrap	ft2 = FragTrap("FT2");
	// FragTrap	ft3("FT3");
	// FragTrap	ft4(ft1);
	// std::cout << std::endl;
	// ft1.highFivesGuys();
	// ft2.highFivesGuys();
	// ft3.highFivesGuys();
	// ft4.highFivesGuys();
	// ft1.attack("enemy1");
	// ft1.takeDamage(5);
	// ft1.beRepaired(2);

	std::cout << "\n??? : \"We will help you\"\n";
    DiamondTrap dt1("DT1");
    // DiamondTrap dt2 = DiamondTrap("DT2");
    // DiamondTrap dt3(dt1);

    std::cout << "\nDiamondTrap 1\n";
	std::cout << dt1.getHP() << " " << dt1.getEP() << " " << dt1.getAD() << std::endl;
    dt1.attack("enemy");
    dt1.takeDamage(10);
    dt1.beRepaired(5);
    dt1.guardGate();
    dt1.highFivesGuys();
    dt1.whoAmI();

    // std::cout << "\nDiamondTrap 2\n";
    // dt2.attack("enemy");
    // dt2.takeDamage(10);
    // dt2.beRepaired(5);
    // dt2.guardGate();
    // dt2.highFivesGuys();
    // dt2.whoAmI();

    // std::cout << "\nDiamondTrap 3\n";
    // dt3.attack("enemy");
    // dt3.takeDamage(10);
    // dt3.beRepaired(5);
    // dt3.guardGate();
    // dt3.highFivesGuys();
    // dt3.whoAmI();
	std::cout << std::endl;

	return 0 ;
}

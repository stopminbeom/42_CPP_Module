/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:25:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/04 22:44:29 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	name1 = "mseo";
	std::string	name2 = "inyang";
	Zombie		*mseo;
	

	std::cout << "Zombie virus is working" << std::endl;
	std::cout << "---------------------------" << std::endl;
	mseo = newZombie(name1);
	mseo->announce();
	delete mseo;
	std::cout << "---------------------------" << std::endl;
	randomChump(name2);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:07:38 by mseo              #+#    #+#             */
/*   Updated: 2022/01/04 23:18:25 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie		*tmp_zombie;
	std::string	name = "Zombie";
	int			Zombie_num = 5;

	tmp_zombie = zombieHorde(Zombie_num, name);
	for (int i = 0; i < 5; i++)
		tmp_zombie[i].announce();
	delete[] tmp_zombie;
	return (0);
}
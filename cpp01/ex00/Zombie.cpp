/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:24:19 by mseo              #+#    #+#             */
/*   Updated: 2022/01/04 22:37:42 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombiename = name;
}

Zombie::~Zombie()
{
	display_name();
	std::cout << " Destructor is working & Zombie is Dead" << std::endl;
}

void	Zombie::display_name(void)
{
	std::cout << "<" << this->Zombiename << ">";
}

void	Zombie::announce(void)
{
	display_name();
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

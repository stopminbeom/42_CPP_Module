/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 02:21:12 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 02:23:01 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon	*B_weapon;
	public:
		HumanB(std::string Bname);
		~HumanB();
};

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:16:59 by mseo              #+#    #+#             */
/*   Updated: 2022/01/14 16:14:55 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	DiaName;
	public:
		DiamondTrap();
		DiamondTrap(std::string &n);
		DiamondTrap(const DiamondTrap& obj);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap& obj);
		void	whoAMI();
		void	attack(std::string const & target);
};

#endif
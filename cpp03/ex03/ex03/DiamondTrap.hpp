/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:53:38 by ylee              #+#    #+#             */
/*   Updated: 2022/01/09 22:28:51 by ylee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	Name;
public:
	DiamondTrap();
	DiamondTrap(const std::string& Name);
	DiamondTrap(const DiamondTrap& otherObj);
	~DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap& otherObj);
	void	attack(std::string const& target);
	int		getHP();
	int		getEP();
	int		getAD();
	void	whoAmI();
};

#endif

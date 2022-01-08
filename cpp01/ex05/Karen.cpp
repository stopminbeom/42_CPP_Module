/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:22:58 by mseo              #+#    #+#             */
/*   Updated: 2022/01/08 18:00:18 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "Karen complain about debug" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "Karen complain about info" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "Karen complain about warning" << std::endl;
}

void	Karen::error( void )
{
	std::cout << "Karen complain about error" << std::endl;
}

void	Karen::complain( std::string level )
{
	void	(Karen::*func[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	
	int lv = ("debug" == level) * 1
				+ ("info" == level) * 2
				+ ("warning" == level) * 3
				+ ("error" == level) * 4;
	
	if (lv == 0)
	{
		std::cout << "Wrong level" << std::endl;
		return ;
	}
	(this->*func[lv - 1])();
}
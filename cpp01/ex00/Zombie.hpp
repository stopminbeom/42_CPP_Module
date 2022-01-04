/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:24:30 by mseo              #+#    #+#             */
/*   Updated: 2022/01/04 22:37:45 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	Zombiename;
	public:
		Zombie(std::string name); // 생성자
		~Zombie();			// 소멸자
		void	announce(void); // 멤버함수
		void	display_name(void);
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
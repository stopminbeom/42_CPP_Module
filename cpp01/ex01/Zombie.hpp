/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:24:30 by mseo              #+#    #+#             */
/*   Updated: 2022/01/04 23:08:41 by mseo             ###   ########.fr       */
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
		Zombie();
		Zombie(std::string name); // 생성자
		~Zombie();			// 소멸자
		void	announce(void); // 멤버함수
		void	display_name(void);
		void	setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
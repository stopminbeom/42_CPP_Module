/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:24:50 by mseo              #+#    #+#             */
/*   Updated: 2022/01/16 21:37:51 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& obj);
		virtual ~Animal();
		Animal& operator=(const Animal& obj);
		virtual void	makeSound() const = 0;
		std::string getType() const;
};

#endif

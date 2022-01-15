/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:32:56 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 21:48:25 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *d_brain;
	public:
		Dog();
		Dog(const Dog& obj);
		~Dog();
		Dog& operator=(const Dog& obj);
		virtual void	makeSound() const;
};

#endif

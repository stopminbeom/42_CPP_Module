/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:31:02 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 21:48:49 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*c_brain;
	public:
		Cat();
		Cat(const Cat& obj);
		~Cat();
		Cat& operator=(const Cat& obj);
		virtual void	makeSound() const;
};

#endif


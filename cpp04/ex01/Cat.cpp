/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:31:22 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 21:54:58 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "<cat default> Hey, human. Give me that can!!" << std::endl;
	type = "Cat";
	c_brain = new Brain;
}

Cat::Cat(const Cat& obj) {
	std::cout << "<cat copy> Hey, human. Give me that Copy can!!" << std::endl;
	*this = obj;
}

Cat::~Cat() {
	std::cout << "<cat destructor> Hey, human. Say goodbye" << std::endl;
	delete c_brain;
}

Cat& Cat::operator=(const Cat& obj) {
	Animal::operator=(obj);
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:33:25 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 21:54:14 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "<dog default> Hey, master! I want walk outside!!" << std::endl;
	type = "Dog";
	d_brain = new Brain;
}

Dog::Dog(const Dog& obj) {
	std::cout << "<dog copy> Hey, master! I want walk! I want walk!" << std::endl;
	*this = obj;
}

Dog::~Dog() {
	std::cout << "<dog destructor> Hey, master... Say goodbye" << std::endl;
	delete d_brain;
}

Dog& Dog::operator=(const Dog& obj) {
	Animal::operator=(obj);
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Bow-wow~" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:31:22 by mseo              #+#    #+#             */
/*   Updated: 2022/01/16 21:19:32 by mseo             ###   ########.fr       */
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
	this->c_brain = obj.c_brain;
	this->type = obj.type;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}

void	Cat::showBrain() const {
	this->c_brain->showideas(0);
	this->c_brain->showideas(30);
	this->c_brain->showideas(70);
}

void	Cat::resetBrain() const {
	this->c_brain->set_ideas();
}
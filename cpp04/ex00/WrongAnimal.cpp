/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:45:17 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 17:47:08 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	type = "something wrong";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	type = obj.type;
	return *this;
}


std::string WrongAnimal::getType() const {
	return this->type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "something makes Wrongsound" << std::endl;
}
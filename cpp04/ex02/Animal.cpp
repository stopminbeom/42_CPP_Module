/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:25:32 by mseo              #+#    #+#             */
/*   Updated: 2022/01/16 21:42:04 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	type = "some animal";
}

Animal::Animal(const Animal& obj) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = obj;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) {
	type = obj.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

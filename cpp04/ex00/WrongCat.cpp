/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:48:07 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 17:46:56 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "<default> 캔따개, 일해라." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) {
	std::cout << "<copy> 캔따개, 일해라." << std::endl;
	*this = obj;
}

WrongCat::~WrongCat() {
	std::cout << "<distructor> 캔따개, bye." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
	WrongAnimal::operator=(obj);
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "고양이는 고양고양하고 울지" << std::endl;
}
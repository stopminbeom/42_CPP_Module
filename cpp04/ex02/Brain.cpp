/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:06:35 by mseo              #+#    #+#             */
/*   Updated: 2022/01/16 21:02:16 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "<Brain> def constructor called" << std::endl;
	std::string	list = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < 100; i++) {
		ideas[i] = list[rand() % sizeof(list)];
	}
}

Brain::Brain(const Brain& obj) {
	std::cout << "<Brain> copy constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain() {
	std::cout << "<Brain> destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj) {
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}

void	Brain::showideas(int num) {
	std::cout << ideas[num] << " ";
}

void	Brain::set_ideas() {
	std::string	list = "1234567890";
	
	for (int i = 0; i < 100; i++) {
		ideas[i] = list[rand() % sizeof(list)];
	}
}

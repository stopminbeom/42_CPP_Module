/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:20:45 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 23:08:11 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main()
{
	Animal *Ani[4];
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			Ani[i] = new Dog();	
		}
		else {
			Ani[i] = new Cat();
		}
	}

	std::cout << "--------test 1 start----------" << std::endl;
	
	for (int i = 0; i < 4; i++) {
		std::cout << Ani[i]->getType() << " : ";
		Ani[i]->makeSound();
	}

	Animal *test = Ani[2];

	std::cout << "--------test 1 end----------" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete Ani[i];
	}

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:20:45 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 17:51:41 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const WrongAnimal*	w = new WrongCat();

	std::cout << "\n------- test Animal---------" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\n----- test Wrong Animal-------" << std::endl;
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();
	std::cout << "\n----- test end-------" << std::endl;

	delete j;
	delete i;
	delete meta;
	delete w;

	return 0;
}
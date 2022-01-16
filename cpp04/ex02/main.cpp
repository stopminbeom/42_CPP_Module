/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:20:45 by mseo              #+#    #+#             */
/*   Updated: 2022/01/16 21:42:43 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main()
{
	Dog	d;
	Cat c;
	// Animal *test = new Animal;
	// Animal test2;

	d.makeSound();
	c.makeSound();

	return 0;
}
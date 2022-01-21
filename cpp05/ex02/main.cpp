/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:52:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/21 22:24:55 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShurbberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat	bob("bob", 1);
	Bureaucrat	mseo("mseo", 150);
	ShurbberyCreationForm	tree("berry");
	RobotomyRequestForm		tom("tom");
	PresidentialPardonForm	pre("Zafod");

	std::cout << "test Shurbbery form" << std::endl;
	bob.signForm(tree);
	try {
		tree.execute(bob);
		tree.execute(mseo);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "test Robotomy form" << std::endl;

	bob.signForm(tom);
	try {
		tom.execute(bob);
		tom.execute(mseo);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "test Presidential~ form" << std::endl; 

	bob.signForm(pre);
	try {
		pre.execute(bob);
		pre.execute(mseo);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:52:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/21 22:12:34 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testExceptionLow(void)
{
	Form	low("low", 151, 150);
}

void	testExceptionHigh(void)
{
	Form	high("high", 1, 0);
}

int	main(void)
{
	try	{
		testExceptionLow();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try	{
		testExceptionHigh();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat	bob("bob", 11);
	Form		f("Form", 10, 5);

	std::cout << bob << std::endl;
	std::cout << f << std::endl;

	try {
		f.beSigned(bob);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	bob.signForm(f);
	bob.incGrade();
	bob.signForm(f);

	std::cout << bob << std::endl;
	std::cout << f << std::endl;

	return (0);
}
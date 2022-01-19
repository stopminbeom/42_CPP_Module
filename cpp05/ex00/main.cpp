/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:52:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/19 17:12:22 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	testBasic(void)
{
	Bureaucrat	bob("bob", 3);

	std::cout << bob << std::endl;
	bob.decGrade();
	std::cout << bob << std::endl;
	bob.incGrade();
	bob.incGrade();
	bob.incGrade();
	bob.incGrade();
	std::cout << bob << std::endl;
}

void	testExceptionLow(void)
{
	Bureaucrat	bob("bob", 151);
}

void	testExceptionHigh(void)
{
	Bureaucrat	bob("bob", 0);
}

int	main(void)
{
	try
	{
		testBasic();
		testExceptionLow();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		testExceptionHigh();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:52:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/19 18:46:19 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
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

	bob.beSigned(f);
	bob.incGrade();
	bob.beSigned(f);

	std::cout << bob << std::endl;
	std::cout << f << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:43:44 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 22:57:55 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& obj) {
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj) {
	(void)obj;
	return *this;
}

Intern::~Intern() {}

Form* Intern::makeForm(std::string form, std::string target) {

	Form	*ret = NULL;

	int lv = 0;
	lv += ("shurbbery creation" == form) * 1;
	lv += ("robotomy request" == form) * 2;
	lv += ("presidential pardon" == form) * 3;
	
	std::cout << "Intern";
	switch (lv)
	{
		case 0:
			std::cout << " creates fail" << std::endl;
			break;
		case 1:
			ret = new ShurbberyCreationForm(target);
			break;
		case 2:
			ret = new RobotomyRequestForm(target);
			break;
		case 3:
			ret = new PresidentialPardonForm(target);
			break;
	}

	if (ret)
		std::cout << " creates <" << ret->getName() << ">" << std::endl;
	return ret;
}

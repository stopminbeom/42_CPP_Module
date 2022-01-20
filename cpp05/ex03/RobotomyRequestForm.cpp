/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:55:48 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 20:36:59 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form ("Robotomy Request Form", 72, 45) {
	target = "Robotomy Target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const n) : Form ("Robotomy Request Form", 72, 45) {
	target = n;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form (obj) {
	target = obj.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	this->Form::operator=(obj);
	this->target = obj.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string	RobotomyRequestForm::getTarget() const {
	return this->target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) {
	if (this->getSign() == false)
		throw	NotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	std::cout << "Dddddddddd... Drrrrrrrr..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << "<" << getTarget() << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << getTarget() << "> has not been robotomized successfully" << std::endl;
}
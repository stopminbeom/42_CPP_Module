/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:56:21 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 20:40:51 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5) {
	target = "Presidential Target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const n) : Form("Presidential Pardon Form", 25, 5) {
	target = n;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form (obj) {
	target = obj.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	this->Form::operator=(obj);
	this->target = obj.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string	PresidentialPardonForm::getTarget() const {
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) {
	if (this->getSign() == false)
		throw	NotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
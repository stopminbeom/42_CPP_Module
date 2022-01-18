/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:41:11 by mseo              #+#    #+#             */
/*   Updated: 2022/01/18 16:59:42 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const n, int g): name(n) {
	if (g < 1)
		throw GradeTooHighException();
	if (g > 150)
		throw GradeTooLowException();
	grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): name(obj.name) {
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	this->grade = obj.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat:: getName() const {
	return this->name;
}

int	Bureaucrat::getGrade() const {
	return this->grade;
}

void	Bureaucrat::incGrade() {
	if (grade == 1)
		return ;
	grade--;
}

void	Bureaucrat::decGrade() {
	if (grade == 150)
		return ;
	grade++;
}

std::ostream& operator <<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << "'s grade is " << b.getGrade();
	return os;
}

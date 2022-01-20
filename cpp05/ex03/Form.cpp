/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:06:39 by mseo              #+#    #+#             */
/*   Updated: 2022/01/19 17:18:48 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const n, int s_grade, int e_grade): 
	name(n), sign_grade(s_grade), exec_grade(e_grade) {
	sign = false;
	if (s_grade < 1 || e_grade < 1)
		throw GradeTooHighException();
	if (s_grade > 150 || e_grade > 150)
		throw GradeTooLowException();
};

Form::Form(const Form& obj):
	name(obj.name), sign_grade(obj.sign_grade), exec_grade(obj.exec_grade) {
	*this = obj;
}

Form& Form::operator=(const Form& obj) {
	sign = obj.sign;
	return *this;
}

Form::~Form() {}

std::string	Form:: getName() const {
	return this->name;
}

int	Form::getSign() const {
	return this->sign;
}

int	Form::getExecGrade() const {
	return this->exec_grade;
}

int	Form::getSignGrade() const {
	return this->sign_grade;
}

void	Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > sign_grade)
		throw GradeTooLowException();
	sign = true;
}

std::ostream& operator <<(std::ostream& os, const Form& f) {
	os << "[" << f.getName() << "]" << std::endl;
	os << "\t" << "signed : " << f.getSign() << std::endl;
	os << "\t" << "Sign Grade : " << f.getSignGrade() << std::endl;
	os << "\t" << "Exec Grade : " << f.getExecGrade() << std::endl;
	return os;
}
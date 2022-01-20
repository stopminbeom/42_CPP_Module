/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:55:11 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 20:37:05 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShurbberyCreationForm.hpp"

ShurbberyCreationForm::ShurbberyCreationForm() : Form("Shurbbery Creation Form", 145, 137) {
	target = "Shurbbery target";
}

ShurbberyCreationForm::ShurbberyCreationForm(std::string const n) : Form("Shurbbery Creation Form", 145, 137) {
	target = n;
}

ShurbberyCreationForm::ShurbberyCreationForm(const ShurbberyCreationForm& obj) : Form(obj) {
	target = obj.getTarget();
}

ShurbberyCreationForm& ShurbberyCreationForm::operator=(const ShurbberyCreationForm& obj) {
	this->Form::operator=(obj);
	this->target = obj.getTarget();
	return *this;
}

ShurbberyCreationForm::~ShurbberyCreationForm() {}

std::string	ShurbberyCreationForm::getTarget() const {
	return this->target;
}

void	ShurbberyCreationForm::execute(Bureaucrat const & executor) {
	if (this->getSign() == false)
		throw	NotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	std::string newfile;
	newfile.append("<").append(target).append(">_shrubbery");
	std::ofstream	outfile(newfile);
	if (outfile.fail())
	{
		std::cout << "Fail : File make" << std::endl;
		return ;
	}
	outfile << "       _-_" << std::endl;
	outfile << "    /~~   ~~\\" << std::endl;
	outfile << " /~~         ~~\\" << std::endl;
	outfile << "{               }" << std::endl;
	outfile << " \\  _-     -_  /" << std::endl;
	outfile << "   ~  \\\\ //  ~" << std::endl;
	outfile << "_- -   | | _- _" << std::endl;
	outfile << "  _ -  | |   -_" << std::endl;
	outfile << "      // \\\\" << std::endl;
	outfile.close();
}
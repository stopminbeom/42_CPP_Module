/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:55:11 by mseo              #+#    #+#             */
/*   Updated: 2022/01/19 19:18:23 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShurbberyCreationForm.hpp"

ShurbberyCreationForm::ShurbberyCreationForm() : Form("Shurbbery Creation Form", 145, 137) {
	target = "Shurbbery target";
}

ShurbberyCreationForm::ShurbberyCreationForm(std::string &n) : Form("Shurbbery Creation Form", 145, 137) {
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




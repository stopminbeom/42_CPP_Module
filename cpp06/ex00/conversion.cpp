/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:09:57 by mseo              #+#    #+#             */
/*   Updated: 2022/01/22 22:37:54 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

conversion::conversion() : str(NULL) {}

conversion::conversion(char *s) : str(s) {}

conversion::conversion(const conversion& obj) {
	this->str = obj.str;
}
conversion& conversion::operator=(const conversion& obj) {
	this->str = obj.str;
	return *this;
}

conversion::~conversion() {}

int		conversion::checktype() {
	const std::string	limits[4] = {"inf", "+inf", "-inf", "nan"};

	if (this->str == NULL)
		return IS_ERROR;
	for (int i = 0; i < 4; i++) {
		if (this->str == limits[i] || this->str == (limits[i] + "f")) {
			this->limit = limits[i];
			return IS_LIMITS;
		}
	}
	if (strlen(this->str) == 1 && !isdigit(this->str[0]))
		return IS_CHAR;
	else {
		int i = 0;
		if (this->str[i] == '+' || this->str[i] == '-') {
			if (this->str[i + 1] == '\0')
				return IS_ERROR;
			i++;
		}
		while (isdigit(this->str[i]))
			i++;
		if (this->str[i] == '.' && this->str[i + 1] != '\0')
			i++;
		else if (this->str[i] == '\0')
			return IS_INT;
		else
			return IS_ERROR;
		while (isdigit(this->str[i]))
			i++;
		if (this->str[i] == 'f' && this->str[i + 1] == '\0')
			return IS_FLOAT;
		else if (this->str[i] == '\0')
			return IS_DOUBLE;
	}
	return IS_ERROR;
}

std::string	conversion::getLimit() const {
	return this->limit;
}

void	conversion::printLimits()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << getLimit() << "f" << std::endl;
	std::cout << "double : " << getLimit() << std::endl;
}

void	conversion::printChar(char c) {
	if (isprint(c) == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
}

void	conversion::printInt(long i) {
	if (i > INT_MAX || i < INT_MIN) {
		std::cout << "Error: Range over" << std::endl;
		return ;
	}
	if (isprint(i) == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
}

void	conversion::printDouble(double d) {
	if (isprint(d) == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(d) << std::endl;
	if (d - static_cast<int>(d) == 0) {
		std::cout << "float : " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double : " << d << ".0" << std::endl;
	}
	else {
		std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
}

void	conversion::printFloat(float f) {
	if (isprint(f) == 0)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0) {
		std::cout << "float : " << f << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
	}
	else {
		std::cout << "float : " << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}
}

void	conversion::convert()
{
	int type = checktype();
	
	if (type == IS_LIMITS) {
		printLimits();
	}
	else if (type == IS_INT) {
		long i = atol(this->str);
		printInt(i);
	}
	else if (type == IS_CHAR) {
		char c = this->str[0];
		printChar(c);
	}
	else if (type == IS_DOUBLE) {
		char* end;
		double d = strtod(this->str, &end);
		printDouble(d);
	}
	else if (type == IS_FLOAT) {
		float f = atof(this->str);
		printFloat(f);	
	}
	else {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
}
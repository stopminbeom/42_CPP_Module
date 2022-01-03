/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:06:48 by mseo              #+#    #+#             */
/*   Updated: 2022/01/03 18:08:34 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::add_contact(void)
{
	std::cout << "write first_name : ";
	std::cin >> this->first_name;
	std::cout << "write last_name : ";
	std::cin >> this->last_name;
	std::cout << "write nickname : ";
	std::cin >> this->nickname;
	std::cout << "write phone_number : ";
	std::cin >> this->phone_number;
	std::cout << "write darkest_secret : ";
	std::cin >> this->darkest_secret;
}

void	contact::index(void)
{
	if (!this->first_name.empty())
		std::cout << "First name	:	" << this->first_name << std::endl;
	if (!this->last_name.empty())
		std::cout << "Last name 	:	" << this->last_name << std::endl;
	if (!this->nickname.empty())
		std::cout << "Nickname	:	" << this->nickname << std::endl;
	if (!this->phone_number.empty())
		std::cout << "Phone number	:	" << this->phone_number << std::endl;
	if (!this->darkest_secret.empty())
		std::cout << "Darkest secret  :	" << this->darkest_secret << std::endl;
}

void	printcontact(std::string str)
{
	if (str.length() > 10) {
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	}
	else
		std::cout << std::setw(10) << str << "|";
}

void	contact::search_contact(void)
{
	printcontact(this->first_name);
	printcontact(this->last_name);
	printcontact(this->nickname);
	std::cout << std::endl;
}

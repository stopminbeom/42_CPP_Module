/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 23:21:40 by mseo              #+#    #+#             */
/*   Updated: 2022/01/04 23:35:28 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string 	*stringPTR = &brain;
	std::string		&stringREF = brain;

	std::cout << "--------- address test --------" << std::endl;
	std::cout << "originStr : " << &brain << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;

	std::cout << "--------- reference test --------" << std::endl;
	std::cout << "originStr : " << brain << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	
	return (0);
}
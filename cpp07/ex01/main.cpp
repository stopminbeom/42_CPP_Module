/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:11:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/25 00:32:56 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "char Array test" << std::endl;
	char ArrChar[4];
	int len = 4;
	for (int i = 0; i < len; i++)
		ArrChar[i] = i + 97;
	iter(ArrChar, len, print);
	
	std::cout << "\nint Array test" << std::endl;
	int Arrint[4];
	for (int i = 0; i < len; i++)
		Arrint[i] = i + 42;
	iter(Arrint, len, print);

	std::cout << "\nstring Array test" << std::endl;
	std::string	Arrstring[4] = {"Test", "String", "Array", "iter"};
	iter(Arrstring, len, print);
	iter(Arrstring, 2, print);
	
	return 0;
}
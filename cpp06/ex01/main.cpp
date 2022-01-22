/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:41:12 by mseo              #+#    #+#             */
/*   Updated: 2022/01/22 23:18:11 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data	*test;
	uintptr_t	ser;
	Data	*ret;

	test = new Data;
	test->n = 42;
	test->c = 'c';
	test->s = "serialize";
	std::cout << "test ptr : " << test << std::endl;
	std::cout << "test value : " << test->n << " " << test->c << " " << test->s << std::endl;

	ser = serialize(test);
	std::cout << "ser ptr : " << ser << std::endl;

	ret = deserialize(ser);
	std::cout << "ret ptr : " << ret << std::endl;
	std::cout << "ret value : " << ret->n << " " << ret->c << " " << ret->s << std::endl;
	
	delete test;
	return 0;
}
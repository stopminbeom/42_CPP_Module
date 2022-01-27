/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:18:04 by mseo              #+#    #+#             */
/*   Updated: 2022/01/27 17:57:14 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include "span.cpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(24);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "Basic test is over" << std::endl;

	srand(time(NULL));
	Span	test = Span(10000);
	std::vector<int>	temp;
	for (int i = 0; i < 10000; i++)
		temp.push_back(rand());
	std::cout << "Testing 1" << std::endl;
	try
	{
		std::cout << "Testing about add 10000 number" << std::endl;
		test.addNumber(temp.begin(), temp.end(), temp.size());
		std::cout << "Testing success" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Testing 2" << std::endl;
	try
	{
		std::cout << "Testing about add 10000 number" << std::endl;
		test.addNumber(temp.begin(), temp.end(), temp.size());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	return 0;
}
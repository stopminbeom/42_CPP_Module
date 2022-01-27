/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:26:12 by mseo              #+#    #+#             */
/*   Updated: 2022/01/26 22:45:24 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main() {
	std::cout << "\nVector test start" << std::endl;
	std::vector<int>	vTest;
	vTest.push_back(4);
	vTest.push_back(2);
	vTest.push_back(42);
	vTest.push_back(13);
	std::cout << "Correct case test" << std::endl;
	try	{
		std::cout << "V test easyfind : " << easyfind(vTest, 42) << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Wrong case test" << std::endl;
	try	{
		std::cout << "V test easyfind : " << easyfind(vTest, 45) << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nVector test is end" << std::endl;
	
	std::cout << "\ndeque test start" << std::endl;
	std::deque<int>		dTest;
	dTest.push_back(4);
	dTest.push_back(2);
	dTest.push_back(42);
	dTest.push_back(13);
	std::cout << "Correct case test" << std::endl;
	try	{
		std::cout << "D test easyfind : " << easyfind(dTest, 42) << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Wrong case test" << std::endl;
	try	{
		std::cout << "D test easyfind : " << easyfind(dTest, 45) << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nDeque test is end" << std::endl;
	
	std::cout << "\nList test start" << std::endl;
	std::list<int>		lTest;
	lTest.push_back(4);
	lTest.push_back(2);
	lTest.push_back(42);
	lTest.push_back(13);
	std::cout << "Correct case test" << std::endl;
	try	{
		std::cout << "L test easyfind : " << easyfind(lTest, 42) << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Wrong case test" << std::endl;
	try	{
		std::cout << "L test easyfind : " << easyfind(lTest, 45) << std::endl;
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nList test is end" << std::endl;
	// system("leaks a.out");
	return 0;
}
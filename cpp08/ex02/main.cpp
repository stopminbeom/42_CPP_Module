/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:29:07 by mseo              #+#    #+#             */
/*   Updated: 2022/01/27 18:28:17 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "mstack begin : " << *it << std::endl;
	std::cout << "mstack end : "<< *(ite - 1) << std::endl;
	++it;
	std::cout << "mstack begin + 1 : " << *it << std::endl;
	--it;
	std::cout << "mstack list : ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::cout << "List test" << std::endl;
	std::list<int>	ltest;
	ltest.push_back(5);
	ltest.push_back(17);
	std::cout << ltest.back() << std::endl;
	ltest.pop_back();
	std::cout << ltest.size() << std::endl;
	ltest.push_back(3);
	ltest.push_back(5);
	ltest.push_back(737);
	ltest.push_back(0);
	std::list<int>::iterator lit = ltest.begin();
	std::list<int>::iterator lite = ltest.end();
	std::cout << "ltest begin : " << *lit << std::endl;
	std::cout << "ltest end : "<< ltest.back() << std::endl;
	++lit;
	std::cout << "ltest begin + 1 : " << *lit << std::endl;
	--lit;
	std::cout << "ltest list : ";
	while (lit != lite)
	{
		std::cout << *lit << " ";
		++lit;
	}
	std::cout << std::endl;
	
	std::stack<int> s(mstack);
	mstack.pop();
	mstack.push(42);
	mstack.push(77);
	std::cout << "copy check " << std::endl;
	std::cout << "size : " << s.size() << std::endl;
	std::cout << "top : " << s.top() << std::endl;
	std::cout << "mstack check " << std::endl;
	std::cout << "size : " << mstack.size() << std::endl;
	std::cout << "top : " << mstack.top() << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:29:07 by mseo              #+#    #+#             */
/*   Updated: 2022/01/27 18:07:18 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

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
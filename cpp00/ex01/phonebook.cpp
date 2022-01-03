/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:26:38 by mseo              #+#    #+#             */
/*   Updated: 2022/01/03 16:43:31 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phonebook::search(void)
{
	int			i;
	std::string	check;

	i = 0;
	std::cout << "mseo's phonebook list" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First_name" << "|";
	std::cout << std::setw(10) << "Last_name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)	{

		std::cout << std::setw(10) << i + 1 << "|";
		pb[i].search_contact();
	}
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "확인하고 싶은 사람의 Index 번호를 입력하세요 : ";
	std::cin >> i;
	if (i >= 1 && i <= 8)	{
		pb[i - 1].index();
	}
}

void	phonebook::add(void)
{
	int			i;

	i = this->idx;
	if (i == 8)	{
		this->idx = 0;
		i = 0;
	}
	pb[i].add_contact();
	this->idx++;
}

void	phonebook::set(void)
{
	this->idx = 0;
}

int	main()
{
	phonebook	pb;
	std::string	command;

	pb.set();
	std::cout << "정보 추가 : ADD" << std::endl;
	std::cout << "정보 확인 : SEARCH" << std::endl;
	std::cout << "종료      : EXIT" << std::endl;
	while (1)
	{
		std::cout << "커맨드를 입력하세요 : ";
		std::cin >> command;
		if (command == "ADD")
			pb.add();
		else if (command == "SEARCH")
			pb.search();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "올바른 커맨드가 아닙니다." << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		command.clear();
		if (std::cin.eof())
			return (0);
	}
	return (0);
}
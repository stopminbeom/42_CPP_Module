/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:34:01 by mseo              #+#    #+#             */
/*   Updated: 2022/01/07 17:27:32 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "argc is not 4, You must write FILENAME s1 s2" << std::endl;
		return (0);
	}
	std::string	s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cout << "s1 or s2 must NOT EMPTY" << std::endl;
		return (0);
	}
	std::ifstream file(argv[1]);
	if (file.fail())
	{
		std::cout << argv[1] << " : File found fail" << std::endl;
		return (0);
	}
	
}
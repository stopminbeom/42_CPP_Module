/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:51:40 by mseo              #+#    #+#             */
/*   Updated: 2022/01/08 18:54:11 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	k;

	if (argc == 1)
	{
		std::cout << "Karen must have her complain level" << std::endl;
		return 0;
	}
	if (argc > 2)
	{
		std::cout << "Karen can speak just one complain" << std::endl;
		return 0;
	}
	k.complain(argv[1]);
	return 0;
}
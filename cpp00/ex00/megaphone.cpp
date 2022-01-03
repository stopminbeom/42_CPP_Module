/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 01:35:31 by mseo              #+#    #+#             */
/*   Updated: 2022/01/03 18:08:37 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else	{
		for (i = 1; i < argc; i++)	{
			str = argv[i];
			while (*str)
				std::cout << (char)toupper(*str++);
		}
	}
	std::cout << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:52:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/21 22:28:04 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("test", "Bender");

	if (rrf != NULL)
		std::cout << *rrf << std::endl;
	// system("leaks Intern");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:52:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 22:58:21 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("testing", "Bender");
	// system("leaks Intern");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:51:40 by mseo              #+#    #+#             */
/*   Updated: 2022/01/08 18:01:35 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	k;

	k.complain("test");
	k.complain("debug");
	k.complain("error");
	k.complain("info");
	k.complain("warning");
	k.complain("err");
	k.complain("42");
	k.complain("");
	return 0;
}
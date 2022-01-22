/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 22:59:48 by mseo              #+#    #+#             */
/*   Updated: 2022/01/22 20:52:25 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "This program need two argc." << std::endl;
		return 0;
	}
	conversion	con(argv[1]);
	con.convert();
	return 0;
}
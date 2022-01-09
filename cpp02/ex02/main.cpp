/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:17:36 by mseo              #+#    #+#             */
/*   Updated: 2022/01/10 02:36:20 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

	Fixed 		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const	c( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const	d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const	e( Fixed( 5.05f ) / Fixed( 2 ) );

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}
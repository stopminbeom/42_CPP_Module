/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:31:20 by mseo              #+#    #+#             */
/*   Updated: 2022/01/09 20:15:54 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): FixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(ref.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;	
	return FixedPoint;
}

void	Fixed::setRawBits( int const raw )
{
	FixedPoint = raw;
}
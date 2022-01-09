/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:31:20 by mseo              #+#    #+#             */
/*   Updated: 2022/01/10 01:12:08 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): FixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	FixedPoint = num << fractonalbits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fnum)
{
	FixedPoint = (int)roundf(fnum * (1 << fractonalbits));
	std::cout << "Float constructor called" << std::endl;
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

std::ostream& operator <<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return FixedPoint;
}

void	Fixed::setRawBits( int const raw )
{
	FixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	float	f = (float)FixedPoint;
	f = f / (1 << fractonalbits);
	return f;
}

int		Fixed::toInt( void ) const
{
	float	i = this->toFloat();
	return (int)roundf(i);
}
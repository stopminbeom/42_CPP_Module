/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:31:20 by mseo              #+#    #+#             */
/*   Updated: 2022/01/10 02:33:55 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): FixedPoint(0)
{
}

Fixed::Fixed(const int num)
{
	FixedPoint = num << fractonalbits;
}

Fixed::Fixed(const float fnum)
{
	FixedPoint = (int)roundf(fnum * (1 << fractonalbits));
}

Fixed::Fixed(const Fixed &rhs)
{
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	setRawBits(ref.getRawBits());
	return *this;
}

bool	Fixed::operator==(const Fixed &b) const
{
	if (b.toFloat() == this->toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed &b) const
{
	if (b.toFloat() != this->toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed &b) const
{
	if (b.toFloat() > this->toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator>(const Fixed &b) const
{
	if (b.toFloat() < this->toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed &b) const
{
	if (b.toFloat() >= this->toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed &b) const
{
	if (b.toFloat() <= this->toFloat())
		return true;
	else
		return false;
}

Fixed	Fixed::operator+(const Fixed &b) const
{
	return this->toFloat() + b.toFloat();
}

Fixed	Fixed::operator-(const Fixed &b) const
{
	return this->toFloat() - b.toFloat();
}

Fixed	Fixed::operator*(const Fixed &b) const
{
	return this->toFloat() * b.toFloat();
}

Fixed	Fixed::operator/(const Fixed &b) const
{
	return this->toFloat() / b.toFloat();
}

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(FixedPoint + 1);
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(FixedPoint - 1);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->setRawBits(FixedPoint + 1);
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->setRawBits(FixedPoint - 1);
	return temp;
}

std::ostream& operator <<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}

Fixed::~Fixed()
{
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

Fixed&	Fixed::min( Fixed &a,  Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}

Fixed&	Fixed::max( Fixed &a,  Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return b;
	else
		return a;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return b;
	else
		return a;
}

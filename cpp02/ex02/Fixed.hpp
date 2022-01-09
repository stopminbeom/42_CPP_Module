/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:18:04 by mseo              #+#    #+#             */
/*   Updated: 2022/01/10 02:29:14 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int	FixedPoint;
		static const int fractonalbits = 8;
	public:
		Fixed();
		Fixed(int num);
		Fixed(float fnum);
		Fixed(const Fixed &rhs);
		Fixed& operator=(const Fixed &ref);
		bool	operator==(const Fixed &b) const;
		bool	operator!=(const Fixed &b) const;
		bool	operator<(const Fixed &b) const;
		bool	operator>(const Fixed &b) const;
		bool	operator<=(const Fixed &b) const;
		bool	operator>=(const Fixed &b) const;
		Fixed	operator+(const Fixed &b) const;
		Fixed	operator-(const Fixed &b) const;
		Fixed	operator*(const Fixed &b) const;
		Fixed	operator/(const Fixed &b) const;
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		const static Fixed&	min(const Fixed &a, const Fixed &b);
		const static Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream& operator <<(std::ostream& os, const Fixed& f);

#endif
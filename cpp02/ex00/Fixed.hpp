/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:18:04 by mseo              #+#    #+#             */
/*   Updated: 2022/01/09 20:11:26 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int	FixedPoint;
		static const int fractonalbits = 8;
	public:
		Fixed();
		Fixed(const Fixed &rhs);
		Fixed& operator=(const Fixed &ref);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
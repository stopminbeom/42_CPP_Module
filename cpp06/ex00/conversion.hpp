/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:09:33 by mseo              #+#    #+#             */
/*   Updated: 2022/01/22 23:01:17 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>

# define	IS_CHAR		1
# define	IS_INT		2
# define	IS_DOUBLE	3
# define	IS_FLOAT	4
# define	IS_LIMITS	5
# define	IS_ERROR	6

class conversion {
	private:
		char* 		str;
		std::string	limit;
		conversion();
	public:
		conversion(char *s);
		conversion(const conversion& obj);
		conversion& operator=(const conversion& obj);
		~conversion();
		void	convert();
		int		checktype();
		void	printChar(char c);
		void	printInt(long i);
		void	printDouble(double d);
		void	printFloat(float f);
		void	printLimits();
		std::string	getLimit() const;
};


#endif

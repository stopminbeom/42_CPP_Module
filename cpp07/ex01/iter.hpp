/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:50:59 by mseo              #+#    #+#             */
/*   Updated: 2022/01/25 00:31:00 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *ptr, int len, void (*func)(T &))
{
	for (int i = 0; i < len; i++)
		func(ptr[i]);
}

template <typename T>
void	print(T & x)
{
	std::cout << x << std::endl;
}

#endif

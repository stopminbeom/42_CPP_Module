/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:52:01 by mseo              #+#    #+#             */
/*   Updated: 2022/01/26 22:37:53 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int	easyfind(T &container, int i) {
	typename T::iterator	iter;
	iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end()) 
		throw std::out_of_range("Error : it can’t be found.");
	return *iter;
}

#endif
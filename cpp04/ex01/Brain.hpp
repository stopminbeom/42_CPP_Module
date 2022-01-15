/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:06:22 by mseo              #+#    #+#             */
/*   Updated: 2022/01/15 22:26:18 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Brain {
	protected:
		std::string ideas[100];	
	public:
		Brain();
		Brain(const Brain& obj);
		~Brain();
		Brain& operator=(const Brain& obj);
};

#endif

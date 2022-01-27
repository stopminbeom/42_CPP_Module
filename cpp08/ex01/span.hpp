/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:45:50 by mseo              #+#    #+#             */
/*   Updated: 2022/01/27 17:57:39 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
	private:
		std::vector<int>	vec;
		unsigned int		i;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
		void	addNumber(int i);
		template <typename T>
		void	addNumber(T const start, T const end, unsigned int size);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
};

#endif

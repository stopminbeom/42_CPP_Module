/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:45:37 by mseo              #+#    #+#             */
/*   Updated: 2022/01/27 17:58:15 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {};

Span::Span(unsigned int n) {
	this->i = n;
	vec.reserve(n);
}

Span::Span(const Span& obj) {
	*this = obj;
}

Span& Span::operator=(const Span& obj) {
	this->i = obj.i;
	this->vec.clear();
	this->vec = obj.vec;
	return *this;
}

Span::~Span() {
	this->vec.clear();
}

void	Span::addNumber(int i) {
	if (vec.size() == this->i)
		throw std::length_error("This vac is full!");
	this->vec.push_back(i);
}

unsigned int		Span::shortestSpan() {
	if (vec.size() < 2)
		throw std::length_error("Can't test it. This vac size under 2");
	std::vector<int>	temp = this->vec;
	sort(temp.begin(), temp.end());
	std::vector<int>::iterator	prev = temp.begin();
	std::vector<int>::iterator	next = temp.begin() + 1;
	unsigned int min = temp.back() - temp.front();
	unsigned int	tmp;
	for (;next != temp.end(); prev++, next++) {
		tmp = *next - *prev;
		if (min > tmp)
			min = tmp;
	}
	return min;
}

unsigned int		Span::longestSpan() {
	if (vec.size() < 2)
		throw std::length_error("Can't test it. This vac size under 2");
	std::vector<int>	temp = this->vec;
	sort(temp.begin(), temp.end());
	unsigned int max = temp.back() - temp.front();
	return max;
}

template <typename T>
void	Span::addNumber(T const start, T const end, unsigned int size) {
	if (this->i - this->vec.size() < size)
		throw	std::out_of_range("Error. size over");
	this->vec.insert(this->vec.end(), start, end);
}
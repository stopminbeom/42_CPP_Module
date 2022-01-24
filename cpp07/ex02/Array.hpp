/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:35:18 by mseo              #+#    #+#             */
/*   Updated: 2022/01/25 01:41:39 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
	private:
		T*	arr;
		unsigned int	n;
	public:
		Array() { this->arr = new T[0], this->n = 0; }
		Array(unsigned int n) { this->arr = new T[n], this->n = n; }
		Array(const Array& obj) {
			this->n = obj.n;
			this->arr = new T[this->n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = obj.arr[i];
		}
		Array& operator=(const Array& obj) {
			if (this != &obj) {
				if (n > 0)
					delete [] this->arr;
				this->n = obj.n;
				this->arr = new T[this->n];
				for (unsigned int i = 0; i < n; i++)
					this->arr[i] = obj.arr[i];
			}
			return *this;
		}
		class outoflimits : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Index limits over";
				}
				virtual ~outoflimits() throw() {}
		};
		T&	operator[](unsigned long int i) {
			if (i >= this->n || i < 0)
				throw outoflimits();
			return this->arr[i];
		}
		unsigned int	size() const { return this->n; }
		~Array() { delete this->arr; }
};

#endif

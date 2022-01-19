/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:40:53 by mseo              #+#    #+#             */
/*   Updated: 2022/01/19 18:40:58 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string	const	name;
		int					grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string const n, int g);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		incGrade();
		void		decGrade();
		void		beSigned(Form &f);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Bureaucrat::exception : Grade is too high";
				}
				virtual ~GradeTooHighException() throw() {}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Bureaucrat::exception : Grade is too low";
				}
				virtual ~GradeTooLowException() throw() {}
		};
};

std::ostream& operator <<(std::ostream& os, const Bureaucrat& b);

#endif

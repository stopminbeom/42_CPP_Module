/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:06:27 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 19:32:41 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string	const	name;
		int			const	sign_grade;
		int			const	exec_grade;
		bool				sign;
		Form();
	public:
		Form(std::string const n, int s_grade, int e_grade);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();
		std::string	getName() const;
		int			getSign() const;
		int			getExecGrade() const;
		int			getSignGrade() const;
		void		beSigned(Bureaucrat &b);
		void		execute(Bureaucrat const & executor);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Form::exception : Bureaucrat Grade is too high";
				}
				virtual ~GradeTooHighException() throw() {}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form::exception : Bureaucrat Grade is too low";
				}
				virtual ~GradeTooLowException() throw() {}
		};
		class  NotSigned: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form::exception : This Form isn't signed";
				}
				virtual ~NotSigned() throw() {}
		};
};

std::ostream& operator <<(std::ostream& os, const Form& f);

#endif

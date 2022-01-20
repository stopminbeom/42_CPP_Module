/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:43:20 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 22:19:32 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShurbberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& obj);
		Intern& operator=(const Intern& obj);
		~Intern();
		Form* makeForm(std::string form, std::string target);
};

#endif

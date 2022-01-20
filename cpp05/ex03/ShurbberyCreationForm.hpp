/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShurbberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:54:53 by mseo              #+#    #+#             */
/*   Updated: 2022/01/20 19:35:56 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShurbberyCreationForm : public Form {
	private:
		std::string	target;
	public:
		ShurbberyCreationForm();
		ShurbberyCreationForm(std::string const n);
		ShurbberyCreationForm(const ShurbberyCreationForm& obj);
		ShurbberyCreationForm& operator=(const ShurbberyCreationForm& obj);
		virtual ~ShurbberyCreationForm();
		std::string	getTarget() const;
		virtual void	execute(Bureaucrat const & executor);
};

#endif

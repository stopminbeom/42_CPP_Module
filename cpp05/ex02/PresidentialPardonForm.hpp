/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:56:06 by mseo              #+#    #+#             */
/*   Updated: 2022/01/19 19:07:59 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:07:32 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/26 10:37:53 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), target("Nothing")
{
	std::cout << "Creating Form: PresidentialPardon." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string Target ) : AForm("PresidentialPardonForm", 25, 5), target(Target)
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm& other ) : AForm(other)
{
	// *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	std::cout << target << " has been perdoned by " << const_cast<Bureaucrat&>(executor).getName() << "." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm deleted." << std::endl;
}
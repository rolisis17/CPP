/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:07:37 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/24 17:33:14 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), target("Nothing")
{
	std::cout << "Creating Form: RobotomyRequest." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string Target ) : AForm("RobotomyRequestForm", 72, 45), target(Target)
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm& other ) : AForm(other)
{
	// *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	std::cout << "Some drilling noises." << std::endl
	<< target << " has been robotomized successfully 50% of the time."
	<< std::endl;	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm deleted." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:07:37 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/26 11:04:03 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

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
	double randomValue = static_cast<double>(rand()) / RAND_MAX;

	if (randomValue < 0.5)
	{
		std::cout << "Vrrrr VrrRR VRRRRVrrRr VrrrR VrRRr rrRr(Some drilling noises)." << std::endl
		<< target << " has been robotomized by " << const_cast<Bureaucrat&>(executor).getName() << "successfully."
		<< std::endl;
	}
	else
	{
		std::cout << "Robotomy failed." << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm deleted." << std::endl;
}

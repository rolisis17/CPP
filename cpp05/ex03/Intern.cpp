/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:37:47 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/26 14:52:44 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "A new intern hired." << std::endl;
}

Intern::Intern( const Intern& other )
{
	*this = other;
}

Intern& Intern::operator=( const Intern& other )
{
	if (this != &other)
	{}
	return (*this);
}

AForm&	Intern::makeForm( std::string formName, std::string formTarget )
{
	typedef AForm& (Intern::*funct_ptr)(std::string);
	int	f = -1;
	funct_ptr pt_arr[4];
	std::string arr[3];

	arr[0] = "presidential pardon";
	arr[1] = "robotomy request";
	arr[2] = "shrubbery creation";
	pt_arr[0] = &Intern::Presidential;
	pt_arr[1] = &Intern::Robotomy;
	pt_arr[2] = &Intern::Shrubbery;
	pt_arr[3] = &Intern::wrongInput;
	while (++f < 4 && formName != arr[f]);
	return ((this->*pt_arr[f])(formTarget));
}

AForm&	Intern::Presidential( std::string target )
{
	std::cout << "Intern creates PresidentialPardonForm." << std::endl;
	return *(new PresidentialPardonForm(target));
}

AForm&	Intern::Robotomy( std::string target )
{
	std::cout << "Intern creates RobotomyRequestForm." << std::endl;
	return *(new RobotomyRequestForm(target));
}

AForm&	Intern::Shrubbery( std::string target )
{
	std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
	return *(new ShrubberyCreationForm(target));
}

AForm&	Intern::wrongInput( std::string target )
{
	static AForm* dummyForm;
	std::cerr << "Intern cannot create " << target << "." << std::endl;
	return *dummyForm;
}

Intern::~Intern()
{
	std::cout << "Intern fired." << std::endl;
}

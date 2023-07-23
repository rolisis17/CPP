/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:33:45 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/23 19:27:30 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Fuck"), grade(150)
{
}

Bureaucrat::Bureaucrat( std::string Name, int Grade ) : name(Name), grade(Grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat& other) : name(other.name)
{
	*this = other;
}
Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other)
{
	if (this != &other)
	{
		const_cast<std::string&>(name) = other.name;
		grade = other.grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName( void )
{
	return (name);
}

int	Bureaucrat::getGrade( void )
{
	return (grade);
}

void	Bureaucrat::promo( void )
{
	if (grade > 1)
		grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::degrade( void )
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm( Form& form )
{
	if (form.getSign() == false)
	{
		try
		{
			form.beSign(*this);
			std::cout << getName() << " signed " << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << getName() << " couldn't sign " << form.getName() << " because "
			<< e.what() << std::endl;
		}
	}
}


std::ostream& operator << (std::ostream& os, Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	what();
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	what();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

Bureaucrat::~Bureaucrat()
{
}

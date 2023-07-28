/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:33:45 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/26 14:36:35 by dcella-d         ###   ########.fr       */
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
	std::cout << "A new Bureaucrat " << name << " has arrived. Grade : " << grade << "." << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat& other) : name(other.name), grade(other.grade)
{
	// *this = other;
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
	{
		grade--;
		std::cout << name << " has been promoted to grade " << grade << "." << std::endl;
	}
	else
	{
		// std::cout << "grade too high.";
		throw GradeTooHighException();
	}
}

void	Bureaucrat::degrade( void )
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm( AForm& form )
{
	std::cout << name << " will try to sign " << form.getName() << "." << std::endl;
	if (form.getSign() == false && grade <= form.getGradeToSign())
	{
		form.beSign(*this);
		std::cout << getName() << " signed " << form.getName() << "." << std::endl;
	}
	else
	{
		std::cerr << getName() << " couldn't sign " << form.getName() << " because ";
		if (grade >= form.getGradeToSign())
			std::cout << "grade is not enough." << std::endl;
		else
			std::cout << "is already signed." << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const & form )
{
	std::cout << name << " will try to execute " << const_cast<AForm&>(form).getName() << "." << std::endl;
	if (const_cast<AForm&>(form).getSign() == true && grade <= const_cast<AForm&>(form).getGradeToSign())
		const_cast<AForm&>(form).checkExecute(*this);
	else
	{
		std::cerr << getName() << " couldn't execute " << const_cast<AForm&>(form).getName() << " because ";
		if (grade >= const_cast<AForm&>(form).getGradeToSign())
			std::cout << "grade is not enough." << std::endl;
		else
			std::cout << "is not signed." << std::endl;
	}
}

std::ostream& operator << (std::ostream& os, Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\33[45mGrade too high!\33[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\33[36mGrade too low!\33[0m");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << name << " said GoodBye!" << std::endl;
}

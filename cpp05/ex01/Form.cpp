/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:09:40 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/24 15:35:54 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Nameless cunt"), sign(150), GradeToSign(150), GradeToExec(150)
{
}

Form::Form( std::string Name, int tosign, int toexec ) : name(Name), GradeToSign(tosign), GradeToExec(toexec)
{
	if (tosign < 1 || toexec < 1)
		throw GradeTooHighException();
	else if (tosign > 150 || toexec > 150)
		throw GradeTooLowException();
	std::cout << "Form " << name << " has been created and can be sign only with grade " << tosign << " and executed with grade " << toexec << "." << std::endl;
}

Form::Form( const Form& other ) : name(other.name), GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
	// *this = other;
}

Form& Form::operator=( const Form& other )
{
	if (this != &other)
	{
		const_cast<std::string&>(name) = other.name;
		const_cast<int&>(GradeToSign) = other.GradeToSign;
		const_cast<int&>(GradeToExec) = other.GradeToExec;
	}
	return (*this);
}

std::string	Form::getName( void )
{
	return name;
}

bool	Form::getSign( void )
{
	return sign;
}

int	Form::getGradeToSign( void )
{
	return GradeToSign;
}

int	Form::getGradeToExec( void )
{
	return GradeToExec;
}

void	Form::beSign( Bureaucrat& bu )
{
	if (bu.getGrade() <= GradeToSign)
	{
		sign = true;
		std::cout << name << " has been signed by " << bu.getName() << std::endl;
	}
	else
		throw GradeTooLowException();
}

Form::~Form()
{
	std::cout << name << " has been deleted." << std::endl;
}

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooLowException::GradeTooLowException()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream&	operator << (std::ostream& os, Form& ik)
{
	os << "name :" << ik.getName() << std::endl;
	os << "Is it signed? ";
	if (ik.getSign())
		os << "yes" << std::endl;
	else
		os << "nop" << std::endl;
	os << "Grade to sign: " << ik.getGradeToSign() << std::endl
		<< "Grade to execute: " << ik.getGradeToExec() << std::endl;
	return os;
}

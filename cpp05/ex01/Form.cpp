/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:09:40 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/23 19:21:42 by dcella-d         ###   ########.fr       */
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
}

Form::Form( const Form& other ) : name(other.name), GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
	*this = other;
}

Form& Form::operator=( const Form& other )
{
	sign = other.sign;
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
		if (sign != false)
			sign = true;
	}
	else
		throw GradeTooLowException();
}

Form::~Form()
{
}

Form::GradeTooHighException::GradeTooHighException()
{
	what();
}

Form::GradeTooLowException::GradeTooLowException()
{
	what();
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
	os << "name :" << ik.getName() << std::endl
	<< "Is it signed? " << ik.getSign() << std::endl
	<< "Grade to sign: " << ik.getGradeToSign() << std::endl
	<< "Grade to execute: " << ik.getGradeToExec() << std::endl;
	return os;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:09:40 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/24 14:38:29 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Nameless cunt"), sign(false), GradeToSign(150), GradeToExec(150)
{
}

AForm::AForm( std::string Name, int tosign, int toexec ) : name(Name), sign(false), GradeToSign(tosign), GradeToExec(toexec)
{
	if (tosign < 1 || toexec < 1)
		throw GradeTooHighException();
	else if (tosign > 150 || toexec > 150)
		throw GradeTooLowException();
	std::cout << "AForm " << name << " has been created and can be sign only with grade " << tosign << " and executed with grade " << toexec << "." << std::endl;
}

AForm::AForm( const AForm& other ) : name(other.name), sign(other.sign), GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
	*this = other;
}

AForm& AForm::operator=( const AForm& other )
{
	if (this != &other)
	{
		const_cast<std::string&>(name) = other.name;
		const_cast<bool&>(sign) = other.sign;
		const_cast<int&>(GradeToSign) = other.GradeToSign;
		const_cast<int&>(GradeToExec) = other.GradeToExec;
	}
	return *(this);
}

std::string	AForm::getName( void ) const
{
	return name;
}

bool	AForm::getSign( void ) const
{
	return sign;
}

int	AForm::getGradeToSign( void ) const
{
	return GradeToSign;
}

int	AForm::getGradeToExec( void ) const
{
	return GradeToExec;
}

void	AForm::beSign( Bureaucrat& bu )
{
	if (bu.getGrade() <= GradeToSign)
	{
		if (sign == false)
		{
			sign = true;
			std::cout << name << " has been signed." << std::endl;
		}
		else
			std::cout << name << " is already signed." << std::endl;
	}
	else
		throw GradeTooLowException();
}

void		AForm::checkExecute( Bureaucrat const & executor )
{
	if (sign == true && executor.getGrade() <= GradeToExec)
	{
		this->execute(executor);
		std::cout << executor.getName() << " executed " << name << "." << std::endl;
	}
	else if (sign == false)
		std::cerr << name << " is not signed." << std::endl;
	else
		throw GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << name << "(AForm) has been deleted." << std::endl;
}

AForm::GradeTooHighException::GradeTooHighException()
{
}

AForm::GradeTooLowException::GradeTooLowException()
{
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return ("\33[45mGrade too high!\33[0m");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("\33[36mGrade too low!\33[0m");
}

std::ostream&	operator << (std::ostream& os, AForm& ik)
{
	os << "name :" << ik.getName() << std::endl
	<< "Is it signed? " << ik.getSign() << std::endl
	<< "Grade to sign: " << ik.getGradeToSign() << std::endl
	<< "Grade to execute: " << ik.getGradeToExec() << std::endl;
	return os;
}

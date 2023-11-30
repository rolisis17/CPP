/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:09:42 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/24 12:45:41 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		const std::string	name;
		bool				sign;
		const int			GradeToSign;
		const int			GradeToExec;

	public:
		AForm();
		AForm( std::string name, int tosign, int toexec );
		AForm( const AForm& other );
		AForm& operator=( const AForm& other );
		std::string	getName( void ) const;
		bool		getSign( void ) const;
		int			getGradeToSign( void ) const;
		int			getGradeToExec( void ) const;
		void		beSign( Bureaucrat& bu );
		virtual void	execute( Bureaucrat const & executor ) const = 0;
		void		checkExecute( Bureaucrat const & executor );
		virtual ~AForm();
	
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			virtual const char* what() const throw();
	};

};

std::ostream&	operator << (std::ostream& os, AForm& ik );

#endif
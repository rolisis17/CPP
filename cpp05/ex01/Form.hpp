/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:09:42 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/23 18:10:20 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			GradeToSign;
		const int			GradeToExec;

	public:
		Form();
		Form( std::string name, int tosign, int toexec );
		Form( const Form& other );
		Form& operator=( const Form& other );
		std::string	getName( void );
		bool		getSign( void );
		int			getGradeToSign( void );
		int			getGradeToExec( void );
		void		beSign( Bureaucrat& bu );
		~Form();
	
	class GradeTooHighException
	{
		public:
			GradeTooHighException();
			virtual const char* what() const throw();
	};

	class GradeTooLowException
	{
		public:
			GradeTooLowException();
			virtual const char* what() const throw();
	};
};

std::ostream&	operator << (std::ostream& os, Form& ik );

#endif
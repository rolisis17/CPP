/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:37:44 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/26 12:34:43 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( const Intern& other );
		Intern& operator=( const Intern& other );
		AForm*	makeForm( std::string str1, std::string str2 );
		AForm*	Presidential( std::string target );
		AForm*	Robotomy( std::string target );
		AForm*	Shrubbery( std::string target );
		AForm*	wrongInput( std::string target );
		~Intern();

	class WrongForm : public std::exception
	{
		public:
			WrongForm();
			virtual const char* what() const throw();
	};
};

#endif
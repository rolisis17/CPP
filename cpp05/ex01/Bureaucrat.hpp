/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:33:43 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/23 18:11:40 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;

    public:
        Bureaucrat();
        Bureaucrat( std::string Name, int Grade );
        Bureaucrat( Bureaucrat& other);
        Bureaucrat& operator=( const Bureaucrat& other);
        std::string getName( void );
        int         getGrade( void );
        void        promo( void );
        void        degrade( void );
		void		signForm( Form& form );
        ~Bureaucrat();

    class   GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException( void );
            virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException( void );
            virtual const char* what() const throw();
    };
};

std::ostream& operator << (std::ostream& os, Bureaucrat& bureaucrat);

#endif
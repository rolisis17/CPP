/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:07:42 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/24 18:10:32 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), target("Nothing")
{
	std::cout << "Creating Form: PresidentialPardon." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string Target ) : AForm("ShrubberyCreationForm", 145, 137), target(Target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm& other ) : AForm(other)
{
	// *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	new_file = target + "_shrubbery";
	std::ofstream newfile(new_file.c_str());
	if (newfile.is_open())
	{
		newfile << std::endl
		<< "                      ___"
		<< "                _,-\'\"\"   \"\"\"\"`--."
		<< "             ,-'          __,,-- \\"
		<< "           ,'    __,--\"\"\"\"dF      )"
		<< "          /   .-\"Hb_,--\"\"dF      /"
		<< "        ,\'       _Hb ___dF\"-._,-\'"
		<< "      ,\'      _,-\"\"\"\"   \"\"--..__"
		<< "     (     ,-\'                  `."
		<< "      `._,\'     _   _             ;"
		<< "       ,'     ,' `-'Hb-.___..._,-'"
		<< "       \\    ,\'\"Hb.-\'HH`-.dHF\""
		<< "        `--'   \"Hb  HH  dF\""
		<< "                \"Hb HH dF"
		<< "                 \"HbHHdF"
		<< "                  |HHHF"
		<< "                  |HHH|"
		<< "                  |HHH|"
		<< "                  |HHH|"
		<< "                  |HHH|"
		<< "                  dHHHb"
		<< "                .dFd|bHb.               o"
		<< "      o       .dHFdH|HbTHb.          o /"
		<< "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y"
		<< "##########################################" << std::endl;
		newfile.close();
	}
	else
		std::cout << "Fail to create .replace file." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm deleted." << std::endl;
}

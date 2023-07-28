/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:07:42 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/26 11:11:57 by dcella-d         ###   ########.fr       */
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
		<< "                      ___" << std::endl
		<< "                _,-\'\"\"   \"\"\"\"`--." << std::endl
		<< "             ,-'          __,,-- \\" << std::endl
		<< "           ,'    __,--\"\"\"\"dF      )" << std::endl
		<< "          /   .-\"Hb_,--\"\"dF      /" << std::endl
		<< "        ,\'       _Hb ___dF\"-._,-\'" << std::endl
		<< "      ,\'      _,-\"\"\"\"   \"\"--..__" << std::endl
		<< "     (     ,-\'                  `." << std::endl
		<< "      `._,\'     _   _             ;" << std::endl
		<< "       ,'     ,' `-'Hb-.___..._,-'" << std::endl
		<< "       \\    ,\'\"Hb.-\'HH`-.dHF\"" << std::endl
		<< "        `--'   \"Hb  HH  dF\"" << std::endl
		<< "                \"Hb HH dF" << std::endl
		<< "                 \"HbHHdF" << std::endl
		<< "                  |HHHF" << std::endl
		<< "                  |HHH|" << std::endl
		<< "                  |HHH|" << std::endl
		<< "                  |HHH|" << std::endl
		<< "                  |HHH|" << std::endl
		<< "                  dHHHb" << std::endl
		<< "                .dFd|bHb.               o" << std::endl
		<< "      o       .dHFdH|HbTHb.          o /" << std::endl
		<< "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl
		<< "########################################## " << const_cast<Bureaucrat&>(executor).getName() << std::endl;
		newfile.close();
	}
	else
		std::cout << "Fail to create .replace file." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm deleted." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:17 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/30 17:56:54 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	int	f;
	
	f = -1;
	while (++f < 8)
		contacts[f] = Contact();
}

void	PhoneBook::addcontact(int counter, std::string name, std::string lastname, std::string nickname, int number, std::string darkest_secret)
{
	contacts[counter%8] = Contact(name, lastname, nickname, number, darkest_secret);
}

int	PhoneBook::display_basic()
{
	int	f = -1;
	int	u = -1;
	int	counter = 0;

	while (++f < 8)
	{
		if (contacts[f].nbr > 0)
		{
			counter++;
			std::cout << std::right << std::setw(5) << f;
			std::cout << " | ";
			while (++u < 3)
			{
				if (contacts[f].str[u].length() > 10)
					std::cout << std::right << std::setw(10) << contacts[f].str[u].substr(0, 9) + ".";
				else
					std::cout << std::right << std::setw(10) << contacts[f].str[u];
				// if (u < 2)
				std::cout << " | ";
			}
			std::cout << std::endl;
		}
		u = -1;
	}
	if (!counter)
	{
		std::cout << "Empty." << std::endl;
		return (1);
	}
	else
		return (0);
}

int	PhoneBook::display_full(int	f)
{
	int	u = -1;
	int	counter = 0;
	std::string names[5];

	names[0] = "Name: ";
	names[1] = "Lastname: ";
	names[2] = "Nickname: ";
	names[4] = "Darkest Secret: ";
	names[3] = "Number: ";
	if (f < 8)
	{
		if (contacts[f].nbr > 0)
		{
			std::cout << "*-----------------------------*" << std::endl;
			counter++;
			while (++u < 3)
				std::cout << names[u] << contacts[f].str[u] << std::endl;
			std::cout << names[u++] << contacts[f].nbr << std::endl;
			std::cout << names[u] << contacts[f].str[u - 1] << std::endl;
			std::cout << "*-----------------------------*" << std::endl;
		}
		else
		{
			std::cout << "Empty." << std::endl;
			return (1);
		}
	}
	if (!counter)
	{
		std::cout << "Empty." << std::endl;
		return (1);
	}
	return (0);
}

int	PhoneBook::parse_input(std::string str)
{
	if (str == "" || str.find_first_not_of(" \n\t") == std::string::npos)
	{
		std::cout << "Invalid input." << std::endl;
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:53 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/28 16:46:59 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter& other )
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& other )
{
	if (this != &other)
		;
	return (*this);
}

void	ScalarConverter::convert( std::string string )
{
	if (checks(string))
		return;
}

int	ScalarConverter::checks( std::string str )
{
	if (checkChar(str))
	{
		std::istringstream	iss(str);
		char c;
		iss >> c;
		int i = static_cast<int>(c);
		float d = static_cast<double>(c);
		float f = static_cast<float>(c);
	
		std::cout << "Char: " << c << std::endl;
		std::cout << "Int: " << i << std::endl;
		std::cout << "Double: " << d << std::endl;
		std::cout << "Float: " << f << ".0f" << std::endl;
		
		return 1;
	}
	else if (checkInt(str))
	{
		std::istringstream	iss(str);
		int i;
		iss >> i;
		char c = static_cast<char>(i);
		float d = static_cast<double>(i);
		float f = static_cast<float>(i);
	
		std::cout << "Char: " << c << std::endl;
		std::cout << "Int: " << i << std::endl;
		std::cout << "Double: " << d << std::endl;
		std::cout << "Float: " << f << ".0f" << std::endl;
		return 2;
	}
	else if (checkFloat(str))
	{
 		std::cout << "Float" << std::endl;
		return 3;
	}
	else if (checkDouble(str))
	{
 		std::cout << "Double" << std::endl;
		return 3;
	}
	return 0;
}

bool	ScalarConverter::checkDouble( std::string str )
{
	int f = -1;
	int counter = 0;
	while (str[++f])
	{
		if (!std::isdigit(str[f]) && str[f] != '.')
			return false;
		if (str[f] == '.')
			counter++;
		if (counter > 1)
			return false;
	}
	return true;
}

bool	ScalarConverter::checkFloat( std::string str )
{
	size_t f = -1;
	while (str[++f])
	{
		if (!(std::isdigit(str[f])) && (str[f] != '.'))
		{
			if (str[f] == 'f' && str.length() - 1 == f)
				return true;
			return false;	
		}
	}
	return false;
}

bool	ScalarConverter::checkChar( std::string str )
{
	int	counter = 0;
	int	f = -1;

	while (str[++f])
	{
		if (!std::isalpha(str[f]))
			return false;
		counter++;
	}
	if (counter > 1)
		return false;
	return true;
}

bool	ScalarConverter::checkInt( std::string str )
{
	for (size_t f = 0; f < str.length(); f++)
	{
		if (!std::isdigit(str[f]))
			return false;
	}
	return true;
}

ScalarConverter::~ScalarConverter() {}
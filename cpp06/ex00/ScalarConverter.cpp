/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:53 by dcella-d          #+#    #+#             */
/*   Updated: 2023/08/01 12:44:30 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

void	toprint(int i, char c, float f, double d);

int	inf_handle(std::string str )
{
	if (str == "inf" || str == "-inf" || str == "nan" || str == "+inf")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << str << "f" << std::endl;
		std::cout << "Double: " << str << std::endl;
		return 1;
	}
	else if (str == "inff" || str == "-inff" || str == "nanf" || str == "+inff")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << str << std::endl;
		std::cout << "Double: " << str.substr(0, str.length() - 1) << std::endl;
		return 1;
	}
	return 0;
}

int	ScalarConverter::convert( std::string str )
{
	std::istringstream iss(str);
	int	i;
	char c;
	float f;
	double d;
	
	if (str.empty() || inf_handle(str))
		return 0;
	if ((str.find('.') == std::string::npos) && iss >> i)
	{
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	
		toprint(i, c, f, d);
		return 1;
	}
	iss.clear();
	iss.seekg(0);
	/* std::cout << std::fixed << std::setprecision(str.length() - 3); */
	if (iss >> d && iss.eof())
	{
		i = static_cast<int>(d);
		c = static_cast<char>(d);
		f = static_cast<double>(d);
	
		toprint(i, c, f, d);
		return 1;
	}
	iss.clear();
	iss.seekg(0);
	if ((!str.empty()) && (str[str.length() - 1] == 'f'))
	{
		str.erase(str.length() - 1);
		std::istringstream iss(str);

		if(iss >> f && iss.eof())
 		{
			i = static_cast<int>(f);
			c = static_cast<char>(f);
			d = static_cast<double>(f);
		
			toprint(i, c, f, d);
			return 1;
		}
	}
	iss.clear();
	iss.seekg(0);
	if (iss >> c && (str.length() == 1))
	{
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	
		toprint(i, c, f, d);
		return 1;
	}
	else
		std::cerr << "Invalid Input." << std::endl;
	return 0;
}

void	toprint(int i, char c, float f, double d)
{
	if (std::isprint(c))
		std::cout << "Char: " << c << std::endl;
	else
		std::cout << "Char: Non displayable" << std::endl;
	std::cout << "Int: " << i << std::endl;
	if ((d - i) != 0)
		std::cout << "Float: " << f << "f" << std::endl
		<< "Double: " << d << std::endl;
	else
		std::cout << "Float: " << f << ".0f" << std::endl
		<< "Double: " << d << ".0" << std::endl;
}

ScalarConverter::~ScalarConverter() {}
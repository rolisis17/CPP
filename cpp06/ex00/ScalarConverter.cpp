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

int	ScalarConverter::inf_handle(std::string str )
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
	
	// std::cout << (iss >> c) << std::endl;
	// std::cout << iss.eof() << std::endl;
	if (str.empty() || inf_handle(str))
		return 0;
	if (iss >> i && iss.eof())
	{
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	
		if (std::isprint(c))
			std::cout << "Char: " << c << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << i << std::endl;
		if (f != 0)
			std::cout << "Float: " << f << "f" << std::endl
			<< "Double: " << d << std::endl;
		else
			std::cout << "Float: 0.0f" << std::endl
			<< "Double: 0.0" << std::endl;
		return 1;
	}
	iss.clear();
	iss.seekg(0);
	if (iss >> d && iss.eof())
	{
		i = static_cast<int>(d);
		c = static_cast<char>(d);
		f = static_cast<double>(d);
	
		if (zerosearch(str, 0))
			return zerosearch(str, 1);
		if (std::isprint(c))
			std::cout << "Char: " << c << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << i << std::endl;
		if (f != 0)
			std::cout << "Float: " << f << "f" << std::endl
			<< "Double: " << d << std::endl;
		else
			std::cout << "Float: 0.0f" << std::endl
			<< "Double: 0.0" << std::endl;
		return 1;
	}
	iss.clear();
	iss.seekg(0);
	if ((!str.empty()) && (str[str.length() - 1] == 'f'))
	{
		str.erase(str.length() - 1);
		std::istringstream iss(str);
		int		ess;
		float	rss;
		iss >> rss;
		if (iss >> ess && iss.eof())
			return (convert(str));
		iss.clear();
		iss.seekg(0);
		if((iss >> f && iss.eof()) && (!zerosearch(str, 0)))
 		{
			i = static_cast<int>(f);
			c = static_cast<char>(f);
			d = static_cast<double>(f);
		
			if (std::isprint(c))
				std::cout << "Char: " << c << std::endl;
			else
				std::cout << "Char: Non displayable" << std::endl;
			std::cout << "Int: " << i << std::endl;
			if (f != 0)
				std::cout << "Float: " << f << "f" << std::endl
				<< "Double: " << d << std::endl;
			else
				std::cout << "Float: 0.0f" << std::endl
				<< "Double: 0.0" << std::endl;
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
	
		if (std::isprint(c))
			std::cout << "Char: " << c << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << i << std::endl;
		if (f != 0)
			std::cout << "Float: " << f << "f" << std::endl
			<< "Double: " << d << std::endl;
		else
			std::cout << "Float: 0.0f" << std::endl
			<< "Double: 0.0" << std::endl;
		return 1;
	}
	if (zerosearch(str , 0))
		zerosearch(str , 1);
	else
		std::cerr << "Invalid Input." << std::endl;
	return 0;
}

int	ScalarConverter::zerosearch( std::string str, int f )
{
	char c;
	int	finddot = 0;
	int	dot = 0;
	int	counter = 0;
	// while (str[finddot] && str[finddot] != '.')
	// 	finddot++;
	// if (str[finddot].e)
	// while (str[finddot + 1 + counter] == '0')
	// 	counter++;
	std::istringstream iss(str);
	while (iss >> c && !iss.eof())
	{
		if (!dot && c != '.')
			finddot++;
		else if (!dot && c == '.')
		{
			dot++;
			continue;
		}
		if (dot && c == '0')
			counter++;
		else if (dot && c != '0')
			break;
	}
	// std::cout << finddot << std::endl;
	if (iss.eof())
	{
		if (dot && f != 0)
			return convert(str.substr(0, finddot));
		else if (dot && f == 0)
			return 1;
		// return convert(str);
	}
	// while (iss >> c && std::cout << c && !iss.eof() && c == '0')
		// counter++;
	// std::cout << counter << std::endl;
	if (f != 0 && (finddot < 3 && counter > 4))
		return convert(str.substr(0, finddot));
	else if (f == 0 && counter > 4)
		return 1;
	return 0;
}

ScalarConverter::~ScalarConverter() {}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:55 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/30 15:20:30 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter& operator=( const ScalarConverter& other );
		static int	inf_handle(std::string str );
		/* static int	zerosearch( std::string str, int f ); */
		~ScalarConverter();

	public:
		static int	convert( std::string str ); 
};

#endif

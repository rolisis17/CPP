/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:55 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/28 16:41:11 by dcella-d         ###   ########.fr       */
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
		static bool	checkDouble( std::string str );
		static bool	checkFloat( std::string str );
		static bool	checkChar( std::string str );
		static bool	checkInt( std::string str );
		static int	checks( std::string str );
		~ScalarConverter();

	public:
		static void	convert( std::string string ); 
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:05:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/28 14:39:52 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

int	main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string* stringPTR = &hi;
	std::string& stringREF = hi;
	char *str1 = strdup("someshit");
	char &str2 = *str1;

    std::cout << "str1: " << static_cast<void*>(str1) << std::endl; // Use static_cast<void*> to print the memory address
    std::cout << "REF: " << static_cast<void*>(&str2) << std::endl;
	std::cout << "str1:" << &str1 << std::endl;
	std::cout << "REF:" << &str2<< std::endl;

	char str3 = 'c';
	char &str4 = str3;

	std::cout << "str1:" << &str3 << std::endl;
	std::cout << "REF:" << &str4<< std::endl;

	std::cout << "hi:" << &hi << std::endl;
	std::cout << "PTR:" << &stringPTR << std::endl;
	std::cout << "REF:" << &stringREF << std::endl;
	
	std::cout << "hi:"  << hi << std::endl;
	std::cout << "PTR:"  << *stringPTR << std::endl;
	std::cout << "REF:" << stringREF << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:05:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 21:17:00 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string* stringPTR = &hi;
	std::string& stringREF = hi;

	std::cout << "hi:" << &hi << std::endl;
	std::cout << "PTR:" << &stringPTR << std::endl;
	std::cout << "REF:" << &stringREF << std::endl;
	
	std::cout << "hi:"  << hi << std::endl;
	std::cout << "PTR:"  << *stringPTR << std::endl;
	std::cout << "REF:" << stringREF << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:10 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/30 18:06:07 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

int	main()
{
	PhoneBook list;
	std::string cmd;
	std::string cmd2;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string darkest_secret;
	std::string	nbr;
	int			number;
	static int	counter;

	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT?" << std::endl;
		std::getline(std::cin, cmd);
		list.parse_input(cmd);
		if (cmd == "EXIT" || cmd == "exit")
			break;
		if (cmd == "ADD" || cmd == "add")
		{
			//, lastname, nickname, number, darkest_secret"
			std::cout << "Name: "; 
			std::getline(std::cin, name);
			// std::cout << name;
			if (list.parse_input(name))
					continue;
			std::cout << "Lastname: "; 
			std::getline(std::cin, lastname);
			if (list.parse_input(lastname))
					continue;
			std::cout << "Nickname: "; 
			std::getline (std::cin, nickname);
			if (list.parse_input(nickname))
					continue;
			std::cout << "Number: "; 
			std::getline (std::cin, nbr);
			std::istringstream iss(nbr);
			if (iss >> number && number > 0)
			{
				std::cout << "Darkest_secret: "; 
				std::getline (std::cin, darkest_secret);
				if (list.parse_input(darkest_secret))
					continue;
				list.addcontact(counter++, name, lastname, nickname, number, darkest_secret);
				std::cout << "Contact Saved."<< std::endl;
			}
			else
				std::cout << "Invalid number." << std::endl;
		}
		if (cmd == "SEARCH" || cmd == "search")
		{
			while (1)
			{
				if (!list.display_basic())
				{
					std::cout << "Choose the contact (using index number 0 to 7) to display more info. Or any letter to go back to the previous menu." << std::endl;
					std::getline(std::cin, cmd2);
					if (list.parse_input(cmd2))
						continue;
					std::istringstream iss(cmd2);
					if (iss >> number)
					{
						if (number > 7)
							std::cout << "No Contact in index " << number << "." << std::endl << std::endl;
						else
							list.display_full(number);
					}
					else
						break ;
				}
				else
				{
					std::cout << "No contacts to search, try add one first." << std::endl;
					break ;
				}
				
			}
		}
	}
	return (0);
}
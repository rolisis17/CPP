/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:10 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/16 20:10:36 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook list;
	std::string cmd;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string darkest_secret;
	int			nbr;
	static int	counter;

	while (cmd != "EXIT" || cmd != "exit")
	{
		std::cout << "ADD, SEARCH or EXIT?" << std::endl;
		std::cin >> cmd;
		std::cout << cmd << "$" << std::endl;
		if (cmd == "ADD" || cmd == "add")
		{
			//, lastname, nickname, number, darkest_secret"
			std::cout << "Name:"; 
			std::cin >> name;
			std::cout << "Lastname:"; 
			std::cin >> lastname;
			std::cout << "Nickname:"; 
			std::cin >> nickname;
			std::cout << "Number:"; 
			std::cin >> nbr;
			std::cout << "Darkest_secret:"; 
			std::cin >> darkest_secret;
			list = PhoneBook(counter, name, lastname, nickname, nbr, darkest_secret);
			std::cout << std::endl;
		}
		if (cmd == "SEARCH" || cmd == "search")
			list.display();
	}
	return (0);
}
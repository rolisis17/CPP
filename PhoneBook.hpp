/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:17 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/16 20:15:37 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		contacts[8];
	
	public:
		PhoneBook()
		{
			int	f;
			
			f = -1;
			while (++f < 8)
				contacts[f] = Contact();
		}

		PhoneBook(int counter, std::string name, std::string lastname, std::string nickname, int number, std::string darkest_secret)
		{
			int	f;
			
			f = -1;
			while (++f < 8)
				contacts[f] = Contact();
			contacts[counter%8] = Contact(name, lastname, nickname, number, darkest_secret);
			// if (counter > 8)
			// 	counter = 0;
		}

		void	display()
		{
			int	f = -1;

			while (++f <= 8)
			{
				if (contacts[f].nbr > 0)
				{
					std::cout.width(10);
					std::cout << contacts[f].str1 << std::cout.width(10) << ".";
					std::cout << " | ";
					std::cout.width(10);
					std::cout << contacts[f].str2;
					std::cout << " | ";
					std::cout.width(10);
					std::cout << contacts[f].str3;
					std::cout << " | ";
					std::cout.width(10);
					std::cout << contacts[f].str4;
					std::cout << " | ";
					std::cout.width(10);
					if (contacts[f].nbr > 0)
						std::cout << contacts[f].nbr;
				}
			}
		}
};
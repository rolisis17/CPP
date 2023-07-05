/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:17 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:01:43 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		contacts[8];
	
	public:
		PhoneBook();
		void	addcontact(int counter, std::string name, std::string lastname, std::string nickname, int number, std::string darkest_secret);
		int		display_basic();
		int		display_full(int f);
		int		parse_input(std::string str);
};

#endif

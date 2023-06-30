/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:25:17 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/30 18:08:09 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	nbr = 0;
}

Contact::Contact(std::string name, std::string lastname, std::string nickname, int number, std::string darkest_secret)
{
	str[0] = name;
	str[1] = lastname;
	str[2] = nickname;
	str[3] = darkest_secret;
	nbr = number;
}

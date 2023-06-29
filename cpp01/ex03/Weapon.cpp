/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:21:26 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:03:17 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string wpn_type )
{
	type = wpn_type;
	// std::cout << " has a gun!" << std::endl;
}

std::string&	Weapon::getType( void )
{
	return type;
}

void	Weapon::setType( std::string new_type )
{
	type = new_type;
}

Weapon::~Weapon()
{
	std::cout << type << " died." << std::endl;
}

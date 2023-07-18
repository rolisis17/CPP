/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:52:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:03:25 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name1 ) : name(name1), Gun(NULL)
{
}

void	HumanB::setWeapon( Weapon &Wpn )
{
	Gun = &Wpn;
}

void	HumanB::attack( void )
{
	std::cout << name << " attacks with teir " << Gun->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " died." << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:21:39 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:01:47 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name1, Weapon& Wpn) : name(name1), Gun(Wpn)
{
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with teir " << Gun.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << name << " died." << std::endl;
}

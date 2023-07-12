/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/06 18:08:55 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Default", 100, 50, 30) // ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	
}

DiamondTrap::DiamondTrap( std::string name1 ) : ClapTrap(name1 + "_clap_name", 100, 50, 30)// ScavTrap(name1), FragTrap(name1)
{
	DiamondTrap::name = name1;
	std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap& other) : ScavTrap( other ), FragTrap( other )
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator = ( const DiamondTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitpoints = other.hitpoints;
		energypoints = other.energypoints;
		atkdamage = other.atkdamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap: " << DiamondTrap::name << ", and my ClapTrap name is: " << ClapTrap::name << std::endl;
}
	
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

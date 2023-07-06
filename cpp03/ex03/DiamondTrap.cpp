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

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap(), hitpoints(FragTrap::hitpoints), energypoints(ScavTrap::energypoints), atkdamage(FragTrap::atkdamage)
{
	// hitpoints = FragTrap::hitpoints;
	// energypoints = ScavTrap::energypoints;
	// atkdamage = FragTrap::atkdamage;
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name1 ) :  ScavTrap( name1 ), FragTrap( name1 ), name(name1),  hitpoints(FragTrap::hitpoints), energypoints(ScavTrap::energypoints), atkdamage(FragTrap::atkdamage)
{
	// hitpoints = FragTrap::hitpoints;
	// energypoints = ScavTrap::energypoints;
	// atkdamage = FragTrap::atkdamage;
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
	
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

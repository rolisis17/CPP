/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/07 18:12:40 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( "Default", 100, 50, 20 )
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap( std::string name1 ) : ClapTrap( name1, 100, 50, 20 )
{
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap& other) : ClapTrap (other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator = ( const ScavTrap& other)
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

void	ScavTrap::attack(const std::string& target)
{
	if (energypoints && hitpoints)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << atkdamage << " points of damage!" << std::endl;
		energypoints--;
		std::cout << "Energy points now: " << energypoints << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

		
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

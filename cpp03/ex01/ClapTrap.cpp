/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/06 17:24:22 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("Nameless"), hitpoints(10), energypoints(10), atkdamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name1 ) : name(name1), hitpoints(10), energypoints(10), atkdamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap& other)
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


void	ClapTrap::attack(const std::string& target)
{
	if (energypoints && hitpoints)
	{
		energypoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << atkdamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (energypoints && hitpoints)
	{
		hitpoints -= amount;
		std::cout << "ClapTrap " << name << " is taking " << amount << " of damage and now it have " << hitpoints << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << "can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energypoints && hitpoints)
	{
		hitpoints += amount;
		energypoints--;
		std::cout << "ClapTrap " << name << " repaired " << amount << " of hit points and now it have " << hitpoints << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << "can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}
		
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

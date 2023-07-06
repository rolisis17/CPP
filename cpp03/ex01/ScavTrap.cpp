/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/06 17:08:48 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	hitpoints = 100;
	energypoints = 50;
	atkdamage = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap( std::string name1 ) : ClapTrap( name1 )
{
	hitpoints = 100;
	energypoints = 50;
	atkdamage = 20;
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
		energypoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << atkdamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << "can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (energypoints && hitpoints)
	{
		hitpoints -= amount;
		std::cout << "ScavTrap " << this->name << " is taking " << amount << " of damage and now it have " << hitpoints << " hit points." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << "can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (energypoints && hitpoints)
	{
		hitpoints += amount;
		energypoints--;
		std::cout << "ScavTrap " << this->name << " repaired " << amount << " of hit points and now it have " << hitpoints << " hit points." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << "can do nothing because have " << energypoints << " energy points and " << hitpoints << " hit points." << std::endl;
}
		
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

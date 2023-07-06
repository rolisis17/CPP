/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/06 18:33:55 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	hitpoints = 100;
	energypoints = 100;
	atkdamage = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap( std::string name1 ) : ClapTrap( name1 )
{
	hitpoints = 100;
	energypoints = 100;
	atkdamage = 30;
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap( FragTrap& other) : ClapTrap (other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator = ( const FragTrap& other)
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

void	FragTrap::highFivesGuys( void )
{
	std::cout << "Can I have a hiiiiigh fiiiiiive? ( > 5 )" << std::endl;
}
		
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

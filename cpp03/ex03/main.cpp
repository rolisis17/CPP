/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:14:46 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/07 19:34:49 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap Diam1("Diam1");
	DiamondTrap Diam2("Diam2");

	std::cout << std::endl << "DiamondTrap Class Now!" << std::endl;
	Diam2.beRepaired(10);
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam1.attack(Diam2.getName());
	Diam2.takeDamage(Diam1.getAtk());
	Diam2.attack(Diam1.getName());
	Diam1.takeDamage(Diam2.getAtk());
	Diam1.highFivesGuys();
	Diam2.highFivesGuys();
	Diam1.guardGate();
	Diam2.guardGate();
	Diam1.whoAmI();
	Diam2.whoAmI();
	return 0;
}
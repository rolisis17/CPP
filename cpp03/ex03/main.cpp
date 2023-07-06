/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:14:46 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/06 19:28:58 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap trap1("trap1");
	ClapTrap trap2("trap2");
	ClapTrap trap3("trap3");
	ClapTrap trap4("trap4");
	ScavTrap Sric1("Sric1");
	ScavTrap Sric2("Sric2");
	ScavTrap Sric3("Sric3");
	ScavTrap& Sric4 = Sric1;
	FragTrap Trip1("Trip1");
	FragTrap Trip2("Trip2");
	FragTrap Trip3("Trip3");
	FragTrap Trip4("Trip4");
	DiamondTrap Diam1("Diam1");
	DiamondTrap Diam2("Diam2");

	std::cout << std::endl << "NO DAMAGE FOR EVERYBODY!" << std::endl;
	trap1.attack("trap2");
	trap2.takeDamage(0);
	trap3.attack("trap4");
	trap4.takeDamage(0);
	trap2.attack("trap1");
	trap1.takeDamage(0);
	trap2.beRepaired(1);
	trap1.beRepaired(1);
	trap3.beRepaired(1);
	trap4.beRepaired(1);
	trap4.attack("trap3");
	trap3.takeDamage(0);
	std::cout << std::endl << "DAMAGE FOR EVERYBODY!" << std::endl;
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric1.attack("Sric2");
	Sric2.takeDamage(20);
	Sric3.attack("Sric4");
	Sric4.takeDamage(20);
	Sric2.attack("Sric1");
	Sric1.takeDamage(20);
	Sric2.beRepaired(10);
	Sric1.beRepaired(10);
	Sric3.beRepaired(10);
	Sric4.beRepaired(10);
	Sric4.attack("Sric3");
	Sric3.takeDamage(20);
	Sric1.guardGate();
	Sric2.guardGate();
	Sric3.guardGate();
	Sric4.guardGate();
	std::cout << std::endl << "FragTrap Class Now!" << std::endl;
	Trip1.attack("Trip2");
	Trip2.takeDamage(20);
	Trip1.attack("Trip2");
	Trip2.takeDamage(20);
	Trip3.attack("Trip4");
	Trip4.takeDamage(20);
	Trip2.attack("Trip1");
	Trip1.takeDamage(20);
	Trip2.beRepaired(10);
	Trip1.beRepaired(10);
	Trip3.beRepaired(10);
	Trip4.beRepaired(10);
	Trip4.attack("Trip3");
	Trip3.takeDamage(20);
	Trip1.highFivesGuys();
	Trip2.highFivesGuys();
	Trip3.highFivesGuys();
	Trip4.highFivesGuys();
	std::cout << std::endl << "DiamondTrap Class Now!" << std::endl;
	Diam1.beRepaired(10);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.attack("Diam2");
	Diam2.takeDamage(20);
	Diam1.guardGate();
	Diam2.guardGate();
	return 0;
}
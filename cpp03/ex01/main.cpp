/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:14:46 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/06 16:58:35 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap trap1("trap1");
	ClapTrap trap2("trap2");
	ClapTrap trap3("trap3");
	ClapTrap trap4("trap4");
	ScavTrap Sric1("Sric1");
	ScavTrap Sric2("Sric2");
	ScavTrap Sric3("Sric3");
	ScavTrap Sric4("Sric4");

	std::cout << "NO DAMAGE FOR EVERYBODY!" << std::endl;
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
	std::cout << "DAMAGE FOR EVERYBODY!" << std::endl;
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
	return 0;
}
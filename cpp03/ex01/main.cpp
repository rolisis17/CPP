/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:14:46 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 20:35:15 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap trap1("trap1");
	ClapTrap trap2("trap2");
	ClapTrap trap3("trap3");
	ClapTrap trap4("trap4");

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
	return 0;
}
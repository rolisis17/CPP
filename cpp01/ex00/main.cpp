/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:11:24 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 18:37:48 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*Zombie1;
	Zombie	*Zombie2;

	randomChump("Foo");
	randomChump("Qee");
	randomChump("Eeu");
	Zombie1 = newZombie("Friendly Zombie");
	Zombie1->announce();
	Zombie2 = newZombie("Hungry Zombie");
	Zombie2->announce();
	delete Zombie1;
	delete Zombie2;
}
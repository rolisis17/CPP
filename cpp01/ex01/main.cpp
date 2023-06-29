/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:11:24 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 21:04:20 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	int	N = 7;
	Zombie *Zombie1 = zombieHorde(N, "Zombie");

	while (N--)
	{
		Zombie1[N].announce();
	}
	delete[] Zombie1;
}
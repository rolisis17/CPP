/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:10:59 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 21:02:00 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, const std::string name )
{
	Zombie	*Zombies = new Zombie[N];

	while (N--)
		 Zombies[N].new_Zombie(name);
	return Zombies;
}
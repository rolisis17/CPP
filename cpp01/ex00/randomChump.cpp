/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:33:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 18:36:49 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	// Zombie	new_zombie(name);
	Zombie*	new_zombie = newZombie(name);

	new_zombie->announce();
	delete new_zombie;
}

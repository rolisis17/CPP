/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:33:34 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 19:54:15 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void	announce( void );

	private:
		std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
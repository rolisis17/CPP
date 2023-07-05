/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:33:34 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:01:01 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

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
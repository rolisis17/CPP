/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:30:33 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/29 18:53:27 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef HARL_HPP
#define	HARL_HPP

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void wronginput( void );

	public:
		void complain( std::string level );
};

#endif
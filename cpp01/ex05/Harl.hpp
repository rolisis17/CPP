/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:30:33 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:03:30 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define	HARL_HPP

#include <iostream>
#include <string>

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
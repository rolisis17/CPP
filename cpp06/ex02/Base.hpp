/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:07:59 by dcella-d          #+#    #+#             */
/*   Updated: 2023/08/02 14:42:20 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define	BASE_HPP

class Base
{
	public:
		virtual ~Base();
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
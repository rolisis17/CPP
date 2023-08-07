/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:31:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/08/07 13:44:07 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename Type>
void swap(Type a, Type b)
{
	Type tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename Type>
Type min(Type a, Type b)
{
	a < b ? a : b;
}

template <typename Type>
Type max(Type a, Type b)
{
	a > b ? a : b;
}

#endif
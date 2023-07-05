/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:47:47 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:04:19 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point( void );
		Point( const float x2, const float y2 );
		Point( const Point& other );
		Point&	operator = ( const Point& other );
		bool	bsp( Point const a, Point const b, Point const c, Point const point);
		bool	isInside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y);
		float	area(float x1, float y1, float x2, float y2, float x3, float y3);
		~Point( void );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 17:44:38 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point( const float x2, const float y2 ) : x(x2), y(y2)
{
}

Point::Point( const Point& other)
{
	*this = other;
}

Point& Point::operator = ( const Point& other)
{
	if (this != &other)
	{
		const_cast<Fixed &>(this->x) = other.x;
		const_cast<Fixed &>(this->y) = other.y;
	}
	return (*this);
}

Point::~Point()
{
}

float	Point::area(float x1, float y1, float x2, float y2, float x3, float y3)
{
   return std::abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
  
bool	Point::isInside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y)
{  
	float A = area (x1, y1, x2, y2, x3, y3);
	float A1 = area (x, y, x2, y2, x3, y3);
	float A2 = area (x1, y1, x, y, x3, y3);
	float A3 = area (x1, y1, x2, y2, x, y);
	if (A1 == 0.0 || A2 == 0.0 || A3 == 0.0)
		return (false);
	return (A == A1 + A2 + A3);
}

bool	Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	return (isInside(a.x.toFloat(), a.y.toFloat(), b.x.toFloat(), b.y.toFloat(), c.x.toFloat(), \
	c.y.toFloat(), point.x.toFloat(), point.y.toFloat()));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:14:46 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 17:51:41 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point v1(Point(2, 2));
	Point v2(Point(8, 3));
	Point v3(Point(5, 7));
	Point p1(Point(4, 4));
	std::cout << "Triangle 1: " << p1.bsp(v1, v2, v3, p1) << std::endl;
	Point v21(Point(0.5, 0.5));
	Point v22(Point(1.5, 1.5));
	Point v23(Point(1.0, 2.5));
	Point p21(Point(1.0, 2.5));
	std::cout << "Triangle 2: " << p21.bsp(v21, v22, v23, p21) << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:09:53 by dcella-d          #+#    #+#             */
/*   Updated: 2023/08/02 11:46:56 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>

typedef unsigned long uintptr_t;

struct Data {
	std::string name;
};

class Serializer
{
	private:
		// Data* data;
		Serializer();
		Serializer( const Serializer& other );
		Serializer& operator=( const Serializer& other );
		~Serializer();
		
	public:
		static uintptr_t serialize(Data* ptr);
// It takes a pointer and converts it to the unsigned integer type uintptr_t.
		static Data* deserialize(uintptr_t raw);
// It takes an unsigned integer parameter and converts it to a pointer to Data.
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:09:51 by dcella-d          #+#    #+#             */
/*   Updated: 2023/08/02 12:12:10 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer( const Serializer& other )
{
	*this = other;
}

Serializer& Serializer::operator=( const Serializer& other )
{
	if (this != &other)
		;
	return (*this);
}

Serializer::~Serializer() {}
		
uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(&(*ptr));
}
// It takes a pointer and converts it to the unsigned integer type uintptr_t.
Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
// It takes an unsigned integer parameter and converts it to a pointer to Data.
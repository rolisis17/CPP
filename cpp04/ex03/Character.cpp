/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern AMateria *ground[100];
#include "Character.hpp"

Character::Character() : Slot({NULL, NULL, NULL, NULL}), materiaNbr(0)
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(std::string type) : Slot({NULL, NULL, NULL, NULL}), materiaNbr(0)
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character( Character& other)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

ICharacter&	Character::operator=( ICharacter& other )
{
	std::cout << "Character Copy assignment constructor called" << std::endl;
	if (this != &other)
		Name = other.getName();
	return (*this);
}

std::string const & Character::getName() const
{
	return (Name);
}

int	Character::checkSlots( void )
{
	int	f = 0;

	while (f < 4 && Slot[f] != NULL)
		f++;
	return (f);
}

void	Character::equip(AMateria* m)
{
	int	openslot = checkSlots();
	if (m == NULL)
		return ;
	if (materiaNbr < 4 && openslot < 4)
	{
		Slot[openslot] = m;
		materiaNbr++;
	}
	else
		std::cout << "Inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 4)
	{
		if (Slot[idx] != NULL)
		{
			Slot[idx]->dropItem(Slot[idx]);
			Slot[idx] = NULL;
			materiaNbr--;
		}
		else
			std::cout << "This slot is empty!" << std::endl;
	}
}

int	Character::getmateriaNbr( void )
{
	return (materiaNbr);
}

void	use(int idx, ICharacter& target)
{
	// std::cout << "* heals " << Character.getName() << "’s wounds *" << std::endl;
}

Character::~Character()
{
	if (materiaNbr > 0)
	{
		for (int f = 0; f < 4; f++)
		{
			if (Slot[f] != NULL)
				delete Slot[f];
		}
	}
	std::cout << "Character Destructor called" << std::endl;
}

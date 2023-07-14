/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:47:43 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/14 19:08:27 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*   know[4];
        int         knowNbr;

    public:
        MateriaSource();
        MateriaSource&  operator=( MateriaSource& other);
        void        learnMateria( AMateria* materia );
        AMateria*   createMateria( std::string const & type);
        ~MateriaSource();
};

#endif
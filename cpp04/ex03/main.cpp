#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria;

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    ICharacter* Mar = new Character("Marcell");
    me->use(0, *bob);
    me->use(1, *bob);
    Mar->unequip(3);
    Mar->unequip(1);
    Mar->use(0, *bob);
    Mar->use(1, *bob);
    *Mar = *me;
    me->use(0, *Mar);
    me->use(1, *Mar);
    Mar->use(0, *me);
    Mar->use(1, *me);
    tmp->deleteGroundItems();
    delete bob;
    delete me;
    delete Mar;
    delete src;
    return 0;
}
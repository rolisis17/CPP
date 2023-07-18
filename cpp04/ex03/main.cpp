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
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << me->getName() << " has equip " << tmp->getType() << "." << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << me->getName() << " has equip " << tmp->getType() << "." << std::endl;
    ICharacter* bob = new Character("bob");
    ICharacter* Mar = new Character("Marcell");
    me->use(0, *bob);
    me->use(1, *bob);
    Mar->equip(tmp->clone());
    std::cout << Mar->getName() << " has equip " << tmp->getType() << "." << std::endl;
    Mar->equip(tmp->clone());
    std::cout << Mar->getName() << " has equip " << tmp->getType() << "." << std::endl;
    Mar->unequip(3);
    std::cout << Mar->getName() << " tryed to unequip slot 3 item." << std::endl;
    Mar->unequip(1);
    std::cout << Mar->getName() << " unequip and dropped slot 1 item." << std::endl;
    std::cout << "Ground now have " << tmp->getgroundItemsIndex() << " item(s) dropped." << std::endl;
    Mar->use(0, *bob);
    std::cout << Mar->getName() << " used slot 0 item." << std::endl;
    Mar->use(1, *bob);
    std::cout << Mar->getName() << " used slot 1 item." << std::endl;
    delete Mar;
    std::cout << "Marcell has been deleted." << std::endl;
    Mar = me;
    std::cout << me->getName() << " has been clone to Marcell" << std::endl;
    me->use(0, *Mar);
    std::cout << me->getName() << " has attacked " << Mar->getName() << " with slot 0." << std::endl;
    me->use(1, *Mar);
    std::cout << me->getName() << " has attacked " << Mar->getName() << " with slot 1." << std::endl;
    Mar->use(0, *me);
    std::cout << Mar->getName() << " has attacked " << me->getName() << " with slot 0." << std::endl;
    Mar->use(1, *me);
    std::cout << Mar->getName() << " has attacked " << me->getName() << " with slot 1." << std::endl;
    tmp->deleteGroundItems();
    std::cout << "The ground has been cleaned. Items droppeds are gone." << std::endl;
    delete bob;
    delete me;
    // delete Mar;
    delete src;
    return 0;
}
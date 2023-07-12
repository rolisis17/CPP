#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* mtt = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* hh = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << hh->getType() << " " << std::endl;
    mtt->makeSound();
    hh->makeSound();
    delete meta;
    delete j;
    delete i;
    delete mtt;
    delete hh;
    return 0;
}
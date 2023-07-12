#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    // Animal yes;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << std::endl;

    int nbr = 2;
    Animal* array[nbr];
    for (int f = 0; f < nbr; f++)
    {
        if (f < nbr / 2)
            array[f] = new Dog();
        else
            array[f] = new Cat();
    }
    for (int s = 0; s < nbr; array[s++]->makeSound());

    static_cast<Cat*>(array[1])->newIdea("Marcell is GAY!");
    static_cast<Cat*>(array[1])->showIdeas();
    std::cout << std::endl << static_cast<Cat*>(array[1])->showIdeaNbr(0) << std::endl << std::endl;
    Cat *cat;
    cat = static_cast<Cat*>(array[1]);
    cat->showIdeas();

    static_cast<Dog*>(array[0])->newIdea("Marcell is not GAY!");
    static_cast<Dog*>(array[0])->showIdeas();
    std::cout << std::endl << static_cast<Dog*>(array[0])->showIdeaNbr(0) << std::endl << std::endl;
    Dog *dog;
    dog = static_cast<Dog*>(array[0]);
    dog->showIdeas();
    for (int d = 0; d < nbr; delete array[d++]);
    return 0;
}
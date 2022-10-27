#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//Animal *animalFarm[8];

	Cat grisou("Grisou");

	// for (int i = 0; i < 8; i++)
	// {
	// 	if (i < 4)
	// 		animalFarm[i] = new Cat();
	// 	else
	// 		animalFarm[i] = new Dog();
	// }
	// animalFarm[0]->makeSound();
	// animalFarm[1]->makeSound();

	// for (int i = 0; i < 8; i++)
	// 	delete animalFarm[i];
//	delete animalFarm[1];
	// Animal* meta = new Animal();
	// Animal* j = new Dog();
	// Animal* i = new Cat();

	// Animal* a = j;
	// std::cout << "\n" << a->getType() << std::endl;

	// a->makeSound();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// const WrongAnimal* meta2 = new WrongAnimal();
	// const WrongAnimal* j2 = new WrongCat();
	// //j2->makeSound()
	// //meta2->makeSound()
	// meta2->makeSound();
	// j2->makeSound();
	return 0;
};
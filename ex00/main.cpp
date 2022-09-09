#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	Animal* a = j;
	std::cout << "\n" << a->getType() << std::endl;

	a->makeSound();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
};
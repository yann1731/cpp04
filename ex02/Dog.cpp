#include "Dog.hpp"

Dog::Dog ()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
};

Dog::Dog (const Dog& doge)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = doge.type;
	this->brain = new Brain;
};

Dog Dog::operator= (const Dog& doge)
{
	std::cout << "Dog = operator overload called" << std::endl;
	Dog newDog;
	newDog.type = doge.type;
	newDog.brain = new Brain;
	return (newDog);
};

Dog::~Dog ()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete (this->brain);
};

void Dog::makeSound (void) const
{
	std::cout << "bork bork" << std::endl;
};
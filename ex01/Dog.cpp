#include "Dog.hpp"

Dog::Dog ()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
};

Dog::Dog (const Dog& doge)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = doge.type;
};

Dog Dog::operator= (const Dog& doge)
{
	std::cout << "Dog = operator overload called" << std::endl;
	Dog newDog;

	newDog.type = doge.type;
	return (newDog);
};

Dog::~Dog ()
{
	std::cout << "Dog default destructor called" << std::endl;
};

void Dog::makeSound (void) const
{
	std::cout << "bork bork" << std::endl;
};
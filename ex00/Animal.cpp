#include "Animal.hpp"

Animal::Animal ()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "No clue";
};

Animal::Animal (const std::string& type)
{
	std::cout << "Animal type constructor called" << std::endl;
	this->type = type;
};

Animal::Animal (const Animal& animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = animal.type;
};

Animal Animal::operator= (const Animal& animal)
{
	std::cout << "Animal operator = overload called" << std::endl;
	Animal newAnimal;
	newAnimal.type = animal.type;
	return (newAnimal);
};

Animal::~Animal ()
{
	std::cout << "Animal default destructor called" << std::endl;
};

std::string Animal::getType (void) const
{
	return (this->type);
};

void Animal::setType (std::string type)
{
	this->type = type;
};

void Animal::makeSound (void) const
{
	std::cout << "Fuck off you stupid animal" << std::endl;
};
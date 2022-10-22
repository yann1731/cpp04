#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void)
{
	this->type = "Ford prefect";
};

WrongAnimal::WrongAnimal (std::string type)
{
	this->type = type;
};

WrongAnimal::WrongAnimal (const WrongAnimal& wronganimal)
{
	this->type = wronganimal.type;
};

WrongAnimal WrongAnimal::operator= (const WrongAnimal& wronganimal)
{
	WrongAnimal newanimal;
	newanimal.type = wronganimal.type;
	return (newanimal);
};

void WrongAnimal::makeSound (void) const
{
	std::cout << "vroom vroom, wtf this is not an animal" << std::endl;
};

void WrongAnimal::setType (std::string type)
{
	this->type = type;
};

std::string WrongAnimal::getType (void)
{
	return (this->type);
};
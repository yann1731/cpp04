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

void WrongAnimal::setType (std::string type)
{
	this->type = type;
};

const std::string WrongAnimal::getType (void)
{
	return (this->type);
};
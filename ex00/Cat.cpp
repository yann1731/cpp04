#include "Cat.hpp"

Cat::Cat ()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
};

Cat::Cat (const Cat& cat)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	this->type = cat.type;
};

Cat Cat::operator= (const Cat& cat)
{
	std::cout << "Cat = operator overload called" << std::endl;
	Cat newCat;
	newCat.type = cat.type;
	return (newCat);
};

Cat::~Cat ()
{
	std::cout << "Cat default destructor called" << std::endl;
};

void Cat::makeSound (void) const
{
	std::cout << "meow meow" << std::endl;
};
#include "Cat.hpp"

Cat::Cat ()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
};

Cat::Cat (const std::string& type)
{
	this->type = type;
	this->brain = new Brain;
	std::cout << "cat type constructor called" << std::endl;
};

Cat::Cat (const Cat& cat)
{
	this->type = cat.type;
	this->brain = new Brain;
	std::cout << "Cat copy assignment constructor called" << std::endl;
};

Cat Cat::operator= (const Cat& cat)
{
	Cat newCat;
	newCat.type = cat.type;
	newCat.brain = new Brain;
	std::cout << "Cat = operator overload called" << std::endl;
	return (newCat);
};

Cat::~Cat ()
{
	delete(this->brain);
	std::cout << "Cat default destructor called" << std::endl;
};

void Cat::makeSound (void) const
{
	std::cout << "meow meow" << std::endl;
};
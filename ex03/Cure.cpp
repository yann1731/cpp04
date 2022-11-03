#include "Cure.hpp"

Cure::Cure ()
{
	this->type = "cure";
};

std::string const & Cure::getType() const
{
	return (this->type);
};

Cure* Cure::clone() const
{
	Cure *newCure = new Cure;
	return (newCure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};
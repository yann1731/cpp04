#pragma once
#include "ICharacter.hpp"

// Complete the definition of the following AMateria class and implement the necessary member functions
// Implement the Materias concrete classes Ice and Cure. Use their name in lower-case ("ice" for Ice, "cure" for Cure) to set their types.
// Of course, their member function clone() will return a new instance of the same type (i.e., if you clone an Ice Materia,
// you will get a new Ice Materia).
class AMateria
{
	protected:
	std::string type;
	public:
	AMateria(std::string const & type);
	//[...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
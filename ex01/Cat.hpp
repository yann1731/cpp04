#pragma once
#include "Animal.hpp"

// Default constructor
// Copy constructor
// Destructor
// Copy assignment operator

class Cat: public Animal
{
	public:
	Cat ();
	Cat (const Cat& cat);
	Cat operator= (const Cat& cat);
	~Cat ();
	void makeSound (void) const;
};
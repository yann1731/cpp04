#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
	Dog ();
	Dog (const Dog& doge);
	Dog operator= (const Dog& doge);
	~Dog ();
	virtual void makeSound (void) const;
	private:
	Brain *brain;
};
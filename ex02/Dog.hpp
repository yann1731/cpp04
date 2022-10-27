#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
	Dog ();
	Dog (const std::string& type);
	Dog (const Dog& doge);
	Dog operator= (const Dog& doge);
	~Dog ();
	void makeSound (void) const;
	private:
	Brain *brain;
};
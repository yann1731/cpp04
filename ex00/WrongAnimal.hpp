#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal ();
	WrongAnimal (std::string type);
	WrongAnimal (const WrongAnimal& wrongAnimal);
	WrongAnimal operator= (const WrongAnimal& wrongAnimal);
	virtual void makeSound (void);
	void setType(std::string type);
	std::string getType(void);

	protected:
	std::string type;
};
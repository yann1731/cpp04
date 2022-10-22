#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal ();
	WrongAnimal (std::string type);
	WrongAnimal (const WrongAnimal& wronganimal);
	WrongAnimal operator= (const WrongAnimal& wronganimal);
	virtual void makeSound (void) const;
	void setType(std::string type);
	std::string getType(void);

	protected:
	std::string type;
};
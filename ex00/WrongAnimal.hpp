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
	void setType(std::string type);
	const std::string getType(void);
	virtual void makeSound () const;

	protected:
	std::string type;
};
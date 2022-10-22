#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	WrongCat ();
	WrongCat (std::string type);
	WrongCat (const WrongCat& wrongcat);
	WrongCat operator= (const WrongCat& wrongcat);
	virtual void makeSound (void);
	void setType(std::string type);
	std::string getType(void);

	protected:
	std::string type;
};
#pragma once
#include <iostream>
#include <string>

class Animal
{
	public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& animal);
	Animal operator= (const Animal& animal);
	virtual ~Animal();
	std::string getType(void) const;
	void setType(const std::string type);
	virtual void makeSound (void) const;

	protected:
	std::string type;
};
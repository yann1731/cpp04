#include "Brain.hpp"

Brain::Brain ()
{
	std::cout << "default brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "food";
};

Brain::Brain (const std::string idea)
{
	std::cout << "idea brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
};

Brain::Brain (const Brain& brain)
{
	std::cout << "copy brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
};

Brain Brain::operator= (const Brain& brain)
{
	Brain newBrain;

	for (int i = 0; i < 100; i++)
		newBrain.ideas[i] = brain.ideas[i];
	return (newBrain);
};

Brain::~Brain ()
{
	std::cout << "default brain destructor called" << std::endl;
};
#include "Brain.hpp"

Brain::Brain ()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "food";
};

Brain::Brain (const std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
};

Brain::Brain (const Brain& brain)
{
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
	return ;
};
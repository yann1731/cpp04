#include <iostream>
#include <string>

class Brain
{
	public:
	Brain();
	Brain(const std::string idea);
	Brain(const Brain& brain);
	Brain operator= (const Brain& brain);
	~Brain();
	private:
	std::string ideas[100];
};
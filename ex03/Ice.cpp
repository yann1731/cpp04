#include "Ice.hpp"

// class Ice: public AMateria
// {
// 	public:
// 	Ice ();
// 	Ice (std::string & const type);
// 	std::string const & getType() const;
// 	Ice* clone();
// 	void use(ICharacter& target);
// };

Ice::Ice ()
{
	this->type = "ice";
};

Ice::Ice (std::string & const type)
{
	this->type = type;
};

std::string const & Ice::getType () const
{
	return (this->type);
};

Ice* Ice::clone () const
{
	Ice *newIce = new Ice;
	return (newIce);
};

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
};
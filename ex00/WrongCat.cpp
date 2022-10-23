#include "WrongCat.hpp"

WrongCat::WrongCat (void)
{
    this->type = "cat";
};

WrongCat::WrongCat (std::string type)
{
    this->type = type;
};

WrongCat::WrongCat (const WrongCat& wrongcat)
{
    this->type = wrongcat.type;
};

WrongCat WrongCat::operator= (const WrongCat& wrongcat)
{
    WrongCat newWrongCat;

    newWrongCat.type = wrongcat.type;
    return (newWrongCat);
};

void WrongCat::makeSound (void) const
{
    std::cout << "What does the capybara say??" << std::endl; 
};

void WrongCat::setType (std::string type)
{
    this->type = type;
};

const std::string WrongCat::getType (void)
{
    return (this->type);
};
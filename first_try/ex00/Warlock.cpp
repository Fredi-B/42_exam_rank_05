#include "Warlock.hpp"

Warlock::Warlock(void) {}

Warlock::Warlock(std::string _name, std::string _title) : name(_name), title(_title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string	Warlock::getName(void) const {return (this->name);}
const std::string	Warlock::getTitle(void) const {return (this->title);}
void				Warlock::setTitle(const std::string &_title) {this->title = _title;}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(const ASpell &other) {*this = other;}

ASpell::ASpell(std::string _name, std::string _effects) : name(_name), effects(_effects) {}

ASpell::~ASpell(void) {}

ASpell	&ASpell::operator=(const ASpell &other)
{
	if (this != &other)
	{
		this->name = other.getName();
		this->effects = other.getEffects();
	}
	return (*this);
}

std::string	ASpell::getName(void) const {return (this->name);}
std::string	ASpell::getEffects(void) const {return (this->effects);}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}

#include "Polymorph.hpp"

	Polymorph::Polymorph(void)
	{
		this->name = "Polymorph";
		this->effects = "turned into a critter";
	}
	Polymorph::Polymorph(std::string _name, std::string _effects)
	{
		this->name = _name;
		this->effects = _effects;
	}
	Polymorph::Polymorph(const Polymorph &other) {*this = other;}
	Polymorph::~Polymorph(void) {}

	Polymorph &Polymorph::operator=(const Polymorph &other)
	{
		if (this != &other)
		{
			this->name = other.getName();
			this->effects = other.getEffects();
		}
		return (*this);
	}

	Polymorph	*Polymorph::clone(void)
	{
		return (new Polymorph());
	}

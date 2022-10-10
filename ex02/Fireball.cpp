#include "Fireball.hpp"

	Fireball::Fireball(void)
	{
		this->name = "Fireball";
		this->effects = "burnt to a crisp";
	}
	Fireball::Fireball(std::string _name, std::string _effects)
	{
		this->name = _name;
		this->effects = _effects;
	}
	Fireball::Fireball(const Fireball &other) {*this = other;}
	Fireball::~Fireball(void) {}

	Fireball &Fireball::operator=(const Fireball &other)
	{
		if (this != &other)
		{
			this->name = other.getName();
			this->effects = other.getEffects();
		}
		return (*this);
	}

	Fireball	*Fireball::clone(void)
	{
		return (new Fireball());
	}

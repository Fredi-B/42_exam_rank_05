#include "Fwoosh.hpp"

	Fwoosh::Fwoosh(void)
	{
		this->name = "Fwoosh";
		this->effects = "fwooshed";
	}
	Fwoosh::Fwoosh(std::string _name, std::string _effects)
	{
		this->name = _name;
		this->effects = _effects;
	}
	Fwoosh::Fwoosh(const Fwoosh &other) {*this = other;}
	Fwoosh::~Fwoosh(void) {}

	Fwoosh &Fwoosh::operator=(const Fwoosh &other)
	{
		if (this != &other)
		{
			this->name = other.getName();
			this->effects = other.getEffects();
		}
		return (*this);
	}

	Fwoosh	*Fwoosh::clone(void)
	{
		return (new Fwoosh());
	}

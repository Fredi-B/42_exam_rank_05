#include "Dummy.hpp"

	Dummy::Dummy(void)
	{
		this->type = "Target Practice Dummy";
	}

	Dummy::Dummy(std::string _type)
	{
		this->type = _type;
	}

	Dummy::Dummy(const Dummy &other)
	{
		*this = other;
	}

	Dummy::~Dummy(void) {}

	Dummy &Dummy::operator=(const Dummy &other)
	{
		if (this != &other)
		{
			this->type = other.getType();
		}
		return (*this);
	}

	Dummy	*Dummy::clone(void) {return (new Dummy());}
	
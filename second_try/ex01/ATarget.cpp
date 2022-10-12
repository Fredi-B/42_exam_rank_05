	#include "ATarget.hpp"
	
	ATarget::ATarget(void) : type("default"){}
	ATarget::ATarget(std::string _type) : type(_type) {}
	ATarget::ATarget(const ATarget &other) {*this = other;}
	ATarget::~ATarget(void) {}

	ATarget &ATarget::operator=(const ATarget &other)
	{
		if (this != &other)
		{
			this->type = other.getType();
		}
		return (*this);
	}

	std::string	ATarget::getType(void) const {return (this->type);}

	void	ATarget::getHitBySpell(const ASpell &spell) const
	{
		std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
	}

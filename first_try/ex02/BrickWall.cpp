#include "BrickWall.hpp"

	BrickWall::BrickWall(void)
	{
		this->type = "Inconspicious Red-brick Wall";
	}

	BrickWall::BrickWall(std::string _type)
	{
		this->type = _type;
	}

	BrickWall::BrickWall(const BrickWall &other)
	{
		*this = other;
	}

	BrickWall::~BrickWall(void) {}

	BrickWall &BrickWall::operator=(const BrickWall &other)
	{
		if (this != &other)
		{
			this->type = other.getType();
		}
		return (*this);
	}

	BrickWall	*BrickWall::clone(void) {return (new BrickWall());}

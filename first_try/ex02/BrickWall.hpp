#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class	BrickWall : public ATarget
{
// inherited from ATarget
// protected:
// 	std::string	type;

public:
	BrickWall(void);
	BrickWall(std::string _type);
	BrickWall(const BrickWall &other);
	~BrickWall(void);

	BrickWall &operator=(const BrickWall &other);

	virtual BrickWall	*clone(void);

	// inherited from ATarget
	// const std::string	&getType(void) const;

	// void	getHitBySpell(const ASpell &spell) const;
};

#endif

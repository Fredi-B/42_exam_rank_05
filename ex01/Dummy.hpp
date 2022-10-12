#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class	Dummy : public ATarget
{
// inherited from ATarget
// protected:
// 	std::string	type;

public:
	Dummy(void);
	~Dummy(void);

	virtual Dummy	*clone(void);

	// inherited from ATarget
	// const std::string	&getType(void) const;

	// void	getHitBySpell(const ASpell &spell) const;
};

#endif

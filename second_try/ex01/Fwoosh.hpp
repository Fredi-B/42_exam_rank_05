#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class	Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	virtual ~Fwoosh(void);

	ASpell *clone(void);
};

#endif

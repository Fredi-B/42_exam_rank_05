#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class	Dummy : public ATarget
{
public:
	Dummy(void);
	virtual ~Dummy(void);

	Dummy *clone(void);
};

#endif

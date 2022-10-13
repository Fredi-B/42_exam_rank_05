#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class	ASpell;

class	ATarget
{
private:
	std::string	type;
public:
	ATarget(void);
	ATarget(std::string type);
	ATarget(const ATarget &other);
	virtual ~ATarget(void);

	ATarget &operator=(const ATarget &other);

	std::string	getType(void) const;

	void	getHitBySpell(const ASpell &spell) const;

	virtual ATarget *clone(void) = 0;
};

#endif
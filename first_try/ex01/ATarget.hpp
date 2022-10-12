#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class	ASpell;

class	ATarget
{
protected:
	std::string	type;

public:
	ATarget(void);
	ATarget(std::string _type);
	ATarget(const ATarget &other);
	virtual ~ATarget(void);

	ATarget &operator=(const ATarget &other);

	const std::string	&getType(void) const;

	virtual ATarget	*clone(void) = 0;

	void	getHitBySpell(const ASpell &spell) const;
};

#endif

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class	ASpell
{
private:
	std::string	name;
	std::string	effects;
public:
	ASpell(void);
	ASpell(std::string _name, std::string _effects);
	ASpell(const ASpell &other);
	virtual ~ASpell(void);

	ASpell &operator=(const ASpell &other);

	std::string	getName(void) const;
	std::string	getEffects(void) const;

	void	launch(const ATarget &target) const;

	virtual ASpell *clone(void) = 0;
};

#endif

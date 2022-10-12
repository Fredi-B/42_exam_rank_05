#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"

class	Fwoosh : public ASpell
{
// inherited from ASpell
// protected:
// 	std::string	name;
// 	std::string	effects;

public:
	Fwoosh(void);
	~Fwoosh(void);

	virtual	Fwoosh	*clone(void);

	// inherited from ASpell
	// std::string	getName(void) const;
	// std::string	getEffects(void) const;

	// void	launch(const ATarget &target) const;
};

#endif

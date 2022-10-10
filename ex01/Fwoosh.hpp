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
	Fwoosh(std::string _name, std::string _effects);
	Fwoosh(const Fwoosh &other);
	~Fwoosh(void);

	Fwoosh &operator=(const Fwoosh &other);

	virtual	Fwoosh	*clone(void);

	// inherited from ASpell
	// std::string	getName(void) const;
	// std::string	getEffects(void) const;

	// void	launch(const ATarget &target) const;
};

#endif

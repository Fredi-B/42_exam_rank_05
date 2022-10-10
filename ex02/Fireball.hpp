#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"

class	Fireball : public ASpell
{
// inherited from ASpell
// protected:
// 	std::string	name;
// 	std::string	effects;

public:
	Fireball(void);
	Fireball(std::string _name, std::string _effects);
	Fireball(const Fireball &other);
	~Fireball(void);

	Fireball &operator=(const Fireball &other);

	virtual	Fireball	*clone(void);

	// inherited from ASpell
	// std::string	getName(void) const;
	// std::string	getEffects(void) const;

	// void	launch(const ATarget &target) const;
};

#endif
#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"

class	Polymorph : public ASpell
{
// inherited from ASpell
// protected:
// 	std::string	name;
// 	std::string	effects;

public:
	Polymorph(void);
	Polymorph(std::string _name, std::string _effects);
	Polymorph(const Polymorph &other);
	~Polymorph(void);

	Polymorph &operator=(const Polymorph &other);

	virtual	Polymorph	*clone(void);

	// inherited from ASpell
	// std::string	getName(void) const;
	// std::string	getEffects(void) const;

	// void	launch(const ATarget &target) const;
};

#endif
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class	SpellBook
{
private:
	std::vector<ASpell *>	spells;

public:
	SpellBook(void);
	~SpellBook(void);

	std::vector<ASpell *>	getSpells(void);

	void	learnSpell(ASpell *spell);
	void	forgetSpell(const std::string &spell_name);
	ASpell	*createSpell(const std::string spell_name);
};

#endif

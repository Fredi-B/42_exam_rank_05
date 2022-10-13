#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>

class	SpellBook
{
private:
	std::map<std::string, ASpell *>	spells;

public:
	SpellBook(void);
	~SpellBook(void);

	void	learnSpell(ASpell *spell);
	void	forgetSpell(const std::string &spell_name);
	ASpell	*createSpell(const std::string &spell_name);

};

#endif

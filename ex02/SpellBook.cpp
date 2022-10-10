#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {}


void	SpellBook::learnSpell(ASpell *spell)
{
	if (spell != NULL)
	{
		this->spells.push_back(spell);
	}
}

void	SpellBook::forgetSpell(const std::string &spell_name)
{
	std::vector<ASpell *>::iterator	it = this->spells.begin();
	std::vector<ASpell *>::iterator	ite = this->spells.end();
	while (it != ite)
	{
		if (spell_name == (*it)->getName())
			this->spells.erase(it);
		it++;
	}
}

ASpell	*SpellBook::createSpell(const std::string spell_name)
{
	
}

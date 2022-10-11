#include "SpellBook.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {}

std::vector<ASpell *>	SpellBook::getSpells(void) {return (this->spells);}

void	SpellBook::learnSpell(ASpell *spell)
{
	if (spell != NULL)
	{
		ASpell *copy = NULL;
		if (spell->getName() == "Fwoosh")
		{
			copy = new Fwoosh();
			copy = spell;
		}
		else if (spell->getName()== "Fireball")
		{
			copy = new Fireball();
			copy = spell;
		}
		if (spell->getName() == "Polymorph")
		{
			copy = new Polymorph();
			copy = spell;
		}
		if (copy == NULL)
			this->spells.push_back(copy);
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
	if (spell_name == "Fwoosh")
		return (new Fwoosh);
	if (spell_name == "Fireball")
		return (new Fireball);
	if (spell_name == "Polymorph")
		return (new Polymorph);
	return (NULL);
}

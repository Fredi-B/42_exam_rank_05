#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}
SpellBook::~SpellBook(void)
{
	std::map<std::string, ASpell *>::iterator	it;
	it = this->spells.begin();
	while (it != this->spells.end())
	{
		if (it->second)
			delete it->second;
		it++;
	}
}

void	SpellBook::learnSpell(ASpell *spell)
{
	if (spell != NULL)
	{
		this->spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
	}
}

void	SpellBook::forgetSpell(const std::string &spell_name)
{
	std::map<std::string, ASpell *>::iterator	it;
	it = this->spells.find(spell_name);
	if (it != this->spells.end())
	{
		delete it->second;
		this->spells.erase(it);
	}
}

ASpell	*SpellBook::createSpell(const std::string &spell_name)
{
	std::map<std::string, ASpell *>::iterator	it;
	it = this->spells.find(spell_name);
	if (it != this->spells.end())
		return (it->second->clone());
	return (NULL);
}

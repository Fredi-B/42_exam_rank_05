#include "Warlock.hpp"

Warlock::Warlock(std::string _name, std::string _title) : name(_name), title(_title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::map<std::string, ASpell *>::iterator	it;
	it = this->spells.begin();
	while (it != this->spells.end())
	{
		if (it->second)
			delete it->second;
		it++;
	}
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string	Warlock::getName(void) const {return (this->name);}

const std::string	Warlock::getTitle(void) const {return (this->title);}

void				Warlock::setTitle(const std::string &_title) {this->title = _title;}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		this->spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
	}
}

void	Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell *>::iterator	it;
	it = this->spells.find(spell_name);
	if (it != this->spells.end())
	{
		delete it->second;
		this->spells.erase(spell_name);
	}
}

void	Warlock::launchSpell(std::string spell_name, ATarget &target)
{
	std::map<std::string, ASpell *>::iterator	it;
	it = this->spells.find(spell_name);
	if (it != this->spells.end())
	{
		it->second->launch(target);
	}
}

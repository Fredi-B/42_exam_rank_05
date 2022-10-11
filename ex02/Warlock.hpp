#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class	SpellBook;

class	Warlock
{
private:
	std::string	name;
	std::string	title;
	SpellBook	spellbook;

public:
	Warlock(std::string _name, std::string _title);
	~Warlock(void);

	const std::string	getName(void) const;
	const std::string	getTitle(void) const;
	void				setTitle(const std::string &_title);

	void	introduce() const;

	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string spell_name);
	void	launchSpell(std::string spell_name, ATarget &target);

private:
	Warlock(void);
};

#endif

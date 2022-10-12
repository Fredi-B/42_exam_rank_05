#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>

class	Warlock
{
private:
	std::string						name;
	std::string						title;
	std::map<std::string, ASpell *>	spells;

public:
	Warlock(std::string _name, std::string _title);
	~Warlock(void);

	const std::string	getName(void) const;
	const std::string	getTitle(void) const;
	void				setTitle(const std::string &_title);

	void	introduce(void) const;

	void	learnSpell(ASpell *spell);
	void	forgetSpell(std::string spell_name);
	void	launchSpell(std::string spell_name, ATarget &target);

};

#endif

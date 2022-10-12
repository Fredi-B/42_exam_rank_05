#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class	Warlock
{
private:
	std::string	name;
	std::string	title;

public:
	Warlock(std::string _name, std::string _title);
	~Warlock(void);

	const std::string	getName(void) const;
	const std::string	getTitle(void) const;
	void				setTitle(const std::string &_title);

	void	introduce() const;
private:
	Warlock(void);
};

#endif

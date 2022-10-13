#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include "ATarget.hpp"
# include <map>

class	TargetGenerator
{
private:
	std::map<std::string, ATarget *>	targets;

public:
	TargetGenerator(void);
	~TargetGenerator(void);

	void	learnTargetType(ATarget *target);
	void	forgetTarget(const std::string &target_name);
	ATarget	*createTarget(const std::string &target_name);
};

#endif

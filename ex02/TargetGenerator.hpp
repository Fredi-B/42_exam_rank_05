#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class	TargetGenerator
{
private:
	std::vector<ATarget *>	targets;

public:
	TargetGenerator(void);
	~TargetGenerator(void);

	std::vector<ATarget *>	getTargets(void);

	void	learnTargetType(ATarget *target);
	void	forgetTargetType(const std::string &target_type);
	ATarget	*createTarget(const std::string spell_type);
};

#endif

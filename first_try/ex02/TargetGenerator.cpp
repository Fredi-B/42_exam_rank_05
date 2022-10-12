#include "TargetGenerator.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void) {}

std::vector<ATarget *>	TargetGenerator::getTargets(void) {return (this->targets);}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	if (target != NULL)
	{
		ATarget *copy = NULL;
		if (target->getType() == "Dummy")
		{
			copy = new Dummy();
			copy = target;
		}
		else if (target->getType() == "BrickWall")
		{
			copy = new BrickWall();
			copy = target;
		}
		if (copy == NULL)
			this->targets.push_back(copy);
	}
}

void	TargetGenerator::forgetTargetType(const std::string &target_type)
{
	std::vector<ATarget *>::iterator	it = this->targets.begin();
	std::vector<ATarget *>::iterator	ite = this->targets.end();
	while (it != ite)
	{
		if (target_type == (*it)->getType())
			this->targets.erase(it);
		it++;
	}
}

ATarget	*TargetGenerator::createTarget(const std::string target_type)
{
	if (target_type == "Dummy")
		return (new Dummy);
	if (target_type == "BrickWall")
		return (new BrickWall);
	return (NULL);
}

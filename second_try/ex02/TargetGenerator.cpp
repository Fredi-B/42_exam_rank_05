#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}
TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget *>::iterator	it;
	it = this->targets.begin();
	while (it != this->targets.end())
	{
		if (it->second)
			delete it->second;
		it++;
	}
}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	if (target != NULL)
	{
		this->targets.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
	}
}

void	TargetGenerator::forgetTarget(const std::string &target_type)
{
	std::map<std::string, ATarget *>::iterator	it;
	it = this->targets.find(target_type);
	if (it != this->targets.end())
	{
		delete it->second;
		this->targets.erase(it);
	}
}

ATarget	*TargetGenerator::createTarget(const std::string &target_type)
{
	std::map<std::string, ATarget *>::iterator	it;
	it = this->targets.find(target_type);
	if (it != this->targets.end())
		return (it->second->clone());
	return (NULL);
}

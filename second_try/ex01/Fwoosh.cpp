#include "Fwoosh.hpp"

	Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {};
	Fwoosh::~Fwoosh(void) {}

	ASpell *Fwoosh::clone(void) {return (new Fwoosh());}

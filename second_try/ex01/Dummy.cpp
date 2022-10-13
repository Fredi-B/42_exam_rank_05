#include "Dummy.hpp"

	Dummy::Dummy(void) : ATarget("Target Practice Dummy") {};
	Dummy::~Dummy(void) {}

	ATarget *Dummy::clone(void) {return (new Dummy());}

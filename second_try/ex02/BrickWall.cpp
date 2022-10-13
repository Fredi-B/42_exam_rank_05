#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {};
BrickWall::~BrickWall(void) {}

ATarget *BrickWall::clone(void) {return (new BrickWall());}

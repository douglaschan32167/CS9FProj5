#include "positions.h"

Position::Position() {
	myRadius = 1.0;
	myAngleInRadians = 0.0;
	
}

Position::Position(float r) {
	myRadius = r;
	myAngleInRadians = 0.0;
}

Position::Position(float r, float thetaInRadians) {
	myRadius = r;
	myAngleInRadians = thetaInRadians;
}
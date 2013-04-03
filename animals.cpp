using namespace std;
#include "animals.h"
#include "park.h"
#include <String>

Mouse::Mouse():Animal() {


}

bool Mouse::Chase() {
	float rad = myPos.getRadius();
	myPos.moveDistance(1.25);
	return false;
}


Person::Person():Animal() {

}
bool Person::Chase() {
	if (myPos.sees(myTarget.Pos())) {
		return false;
	} else {
		myPos.moveDistance(2.0);
		return false;
	}
}
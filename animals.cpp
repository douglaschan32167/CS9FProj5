using namespace std;
#include "animals.h"
#include "park.h"
#include <String>

Mouse::Mouse():Animal() {


}

bool Mouse::Chase() {
	float rad = myPos.myRadius;
	myPos.IncrementPosition(0.0, 1.25/rad);
	return 0;
}
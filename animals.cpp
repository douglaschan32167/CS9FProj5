
#include "animals.h"
#include "park.h"
#include "positions.h"
#include <iostream>
#include <string>
using namespace std;

Mouse::Mouse(String s, Position p):Animal(String s, Position p) {


}

bool Mouse::Chase() {
	float rad = myPos.getRadius();
	myPos.moveDistance(1.25);
	cout << "mouse moves"<< endl;
	return false;
}


Person::Person(String s, Position p):Animal(String s, Position p) {

}
bool Person::Chase() {
	if (myPos.sees(myTarget.Pos())) {
		cout << "person sees target" << endl;
		return false;
	} else {
		cout << "person moves" << endl;
		myPos.moveDistance(2.0);
		return false;
	}
}

Cat::Cat(String s, Position p):Animal(String s, Position p) {

}

bool Cat::Chase() {
	if (myPos.sees(myTarget.Pos())) {
		myPos.IncrementPosition(1.0, 0.0);
	} else {
		Position temp = myPos;
		temp.moveDistance(2.0);
		if (myTarget.Pos().isBetween(myPos, temp)) {
			cout << "cat caught mouse" << endl;
			return true;
		} else {
			myPos.moveDistance(2.0);
		}
	}
	
	

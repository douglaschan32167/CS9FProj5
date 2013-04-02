#ifndef ANIMALS_H
#define ANIMALS_H

#include <String>
#include <Vector>
#include "position.h"
#include "park.h"

class Cat: public Animal {
friend class Scene;

public:
	Cat(String s, Position p);
	virtual bool Chase(); //const?


protected:


};

class Mouse: public Animal {
friend class Scene;

public:
	Mouse(String s, Position P);
	virtual bool Chase();

protected:

};


class Human: public Animal {
friend class Scene;

public:
	Human(String s, Position p);
	virtual bool Chase();

protected:


};




#endif
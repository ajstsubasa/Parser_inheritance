#pragma once
#include"Pair.h"
class Else : public Pair {

public:

	Else(Pair *l, Pair *r, char t) {

		setLeft(l);
		setRight(r);
		settype(t);
		setvalue(t);
	}
	Else(char x, char type)
	{

		setLeft(nullptr);
		setRight(nullptr);
		settype(type);
		setvalue(x);

	}


};
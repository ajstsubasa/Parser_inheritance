#pragma once
#include"Pair.h"
class While : public Pair {

public:

	While(Pair *l, Pair *r, char t) {

		setLeft(l);
		setRight(r);
		settype(t);
		setvalue(t);
	}
	While(char x, char type)
	{
		setLeft(nullptr);
		setRight(nullptr);
		settype(type);
		setvalue(x);

	}


};
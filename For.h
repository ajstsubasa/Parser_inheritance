#pragma once
#include"Pair.h"
class For : public Pair {

public:

	For(Pair *l, Pair *r, char t) {

		setLeft(l);
		setRight(r);
		settype(t);
		setvalue(t);
	}
	For(char x, char type)
	{

		setLeft(nullptr);
		setRight(nullptr);
		settype(type);
		setvalue(x);

	}


};
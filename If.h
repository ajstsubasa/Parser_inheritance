#pragma once
#include"Pair.h"
class If : public Pair {

public:

	If(Pair *l, Pair *r, char t) {

		setLeft(l);
		setRight(r);
		settype(t);
		setvalue(t);
	}
	If(char x, char type)
	{
		//left = nullptr;
		//right = nullptr;
		setLeft(nullptr);
		setRight(nullptr);
		settype(type);

		//this->type = type;
		setvalue(x);

	}

	
};
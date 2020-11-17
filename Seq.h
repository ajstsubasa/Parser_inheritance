#pragma once
#include"Pair.h"
#include"If.h"
#include"For.h"
class Seq : public Pair {

public:

	Seq(Pair *l, Pair *r, char t) {

		setLeft(l);
		setRight(r);
		settype(t);
		setvalue(t);
	}
	Seq(char x, char type)
	{
		setLeft(nullptr);
		setRight(nullptr);
		settype(type);
		setvalue(x);

	}
	/*
	Seq(If *l, If *r, char t) {

		left = l;
		right = r;
		this->type = t;
		this->value = t;
	}
	Seq(If *l, Seq *r, char t) {

		left = l;
		right = r;
		this->type = t;
		this->value = t;
	}
	Seq(Seq *l, If *r, char t) {

		left = l;
		right = r;
		this->type = t;
		this->value = t;
	}
	Seq(If *l, For *r, char t) {

		left = l;
		right = r;
		this->type = t;
		this->value = t;
	}
	Seq(For *l, If *r, char t) {

		left = l;
		right = r;
		this->type = t;
		this->value = t;
	}
	*/


};
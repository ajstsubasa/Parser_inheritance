#pragma once
class Pair
{
private:
	Pair *left;
	Pair *right;
	char type ; // t is the type.
private:
	char value;

private:
	 char val[10];
	 char oper[2];

public:
	Pair(Pair *l, Pair *r, char t) {

		left = l;
		right = r;
		this->type = t;
		this->value = t;
	}
	Pair(Pair *l, Pair *r, char t, char value) {

		left = l;
		right = r;
		this->type = t;
		this->value = value;

	}
	Pair()
	{
		int r = 0;

	}
	Pair(char x, char type)
	{
		left = nullptr;
		right = nullptr;

		this->type = type;
		this->value = x;


	}
	Pair(char x[], char type)
	{
		this->type = type;
		int len = sizeof(val) / sizeof(x[0]);
		for (int i = 0; i < len;i++)
		{
			if (x[i] == 'N')
			{
				val[i] ='\0';
				break;
			}
			val[i] = x[i];

		}
		
	

	}
	void setRight(Pair *r)
	{
		this->right = r;
	}
	void setLeft(Pair *l)
	{
		this->left = l;
	}
	void settype(char h)
	{
		this->type = h;
	}
	Pair* getLeft()
	{
		return this->left;
	}
	Pair* getRight()
	{
		return this->right;
	}
	char gettype()
	{
		return this->type;
	}
	char getvalue()
	{
		return this->value;

	}
	void setvalue(char h)
	{
		this->value = h;
	}
	char * getval()
	{
		return val;
	}





};


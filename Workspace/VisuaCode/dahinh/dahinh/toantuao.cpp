#include <iostream>
using namespace std;
class A
{
protected:
	int X1;
public:
	A(int I)
	{
		this->X1 = I;
	}
	virtual A& operator+(A &T);
	virtual A& operator=(A &T);
	virtual int getA()
	{
		return X1;
	}
	virtual int getB()
	{
		return 0;
	}
	virtual int getC()
	{
		return 0;
	}
	void print(char *st)
	{
		cout << st << " X1 = " << X1 << endl;
	}
};
class B :public A
{
protected:
	int X2;
public:
	B(int i, int j) : A(i)
	{
		X2 = j;
	}
	virtual A& operator+(A &b);
	virtual A& operator=(A &b);
	virtual int getB()
	{
		return X2;
	}
	void print(char *st)
	{
		cout << st << ": X1" << X1 << ", X2 = " << X2 << endl;
	}
};
class C: public B
{
protected:
	int X3;
public:
	C(int i, int j, int z): B(i,j)
	{
		this->X3 = z;
	}

};
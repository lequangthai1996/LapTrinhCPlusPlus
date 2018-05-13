#ifndef  DERIVED_H
#define DERIVER_H
#include "Base1.h"
#include "Base2.h"
#include <iostream>
using namespace std;
class Deriverd: public Base1,public Base2
{
private:
	float Real;
public:
	Deriverd(int, char, float);
	float getReal();
	friend ostream& operator<<(ostream& out, const Deriverd &d);
};
#endif // ! DERIVED_H


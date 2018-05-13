#include "Derived.h"
Deriverd::Deriverd(int x, char c, float f) :Base1(x),Base2(c)
{
	this->Real = f;
}
float Deriverd::getReal()
{
	return this->Real;
}
ostream& operator<<(ostream &out, const Deriverd &d)
{
	out << "Derived: [" << d.Value << "," << d.Letter << "," << d.Real<< "]"<< endl;
	return out;
}
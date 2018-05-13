#include "Pointer.h"
Pointer::Pointer(float x, float y)
{
	this->X = x;
	this->Y = y;
	cout << "Constructor of Pointer: ";
}
float Pointer::getX()
{
	return this->X;
}
float Pointer::getY()
{
	return this->Y;
}
void Pointer::display()
{
	cout << "pointer.diplay()" << endl;
}
ostream& operator<<(ostream &out, const Pointer &p)
{
	out << "[" << p.X << "," << p.Y <<"]"<< endl;
	return out;
}

//istream& operator >> (istream &in, Pointer &p)
//{
//	cout << "Enter X: "; in >> p.X;
//	cout << "Enter Y:"; in >> p.Y;
//	return in;
//}
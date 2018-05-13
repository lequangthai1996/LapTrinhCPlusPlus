#ifndef  POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Pointer
{
protected:
	float X, Y;
public:
	Pointer(float = 0, float  = 0);
	float getX();
	float getY();
	void display();
	friend ostream & operator <<(ostream &out, const Pointer &p);	
	//friend istream& operator >> (istream &in, Pointer &p);
};
#endif // ! POINT_H

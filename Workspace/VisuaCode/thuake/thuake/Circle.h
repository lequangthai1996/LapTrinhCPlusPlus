#ifndef CIRCLE_H
#define CIRCLE_H
#include "Pointer.h"
class Circle: public Pointer
{
protected:
	float Radius;
public:
	Circle(float R, float a, float b);
	void setRadius(float r);
	float getRadius();
	float Area();
	void display();
	friend ostream& operator<<(ostream &out, const Circle &c);
};
#endif // !CIRCLE_H

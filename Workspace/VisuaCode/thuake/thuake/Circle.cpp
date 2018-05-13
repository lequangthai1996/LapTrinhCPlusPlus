#include "Circle.h"
#include <iomanip>
Circle::Circle(float R, float a, float b) : Pointer(a, b) // gọi constructor lớp cơ sở
{
	this->Radius = R; // Pointer(a,b) đặt trong này cũng được
	cout << "Constructor of Circle class:" << this->X << ", " << this->Y << endl;
}
void Circle::setRadius(float r)
{
	this->Radius = r;
}
float Circle::getRadius()
{
	return this->Radius;
}
float Circle::Area()
{
	return 3.1415*Radius*Radius;
}
void Circle::display()
{
	cout << "circle.display()" << endl;
}
ostream& operator<<(ostream &out, const Circle &c)
{
	out << "Center = [" << c.X<< "," << c.Y << "]";
	out << " ; Radius = " <<setiosflags(ios::showpoint)<<setprecision(2)<<c.Radius << endl;
	return out;
}

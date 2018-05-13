#include "Count.h"
Count::Count(string name,int x)
{
	this->name = name;
	this->age = x;
}
void Count::print() const
{
	cout << this->name << "  " << this->age;
}

void set(Count& c, int x)
{
	c.age = x; // Ko phải giống như kiểu con trỏ -> mà dùng . vì c là tham chiếu not con trỏ
}
void set(Count& c, string s)
{
	c.name = s;
}


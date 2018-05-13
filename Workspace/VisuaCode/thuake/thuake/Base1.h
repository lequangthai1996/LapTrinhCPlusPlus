#ifndef  BASE1_H
#define BASE1_H
class Base1
{
protected:
	int Value;
public:	
	Base1(int X)
	{
		this->Value = X;
	}
	int getData()
	{
		return this->Value;
	}
};
#endif // ! BASE1_H

#ifndef  BASE2_H
#define BASE2_H
class Base2
{
protected:
	char Letter;
public:
	Base2(char c)
	{
		this->Letter = c;
	}
	char getData()
	{
		return this->Letter;
	}
};
#endif // ! BASE2_H

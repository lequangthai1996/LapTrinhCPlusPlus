#ifndef  BASE_H
#define BASE_H
#include <iostream>
using namespace std;
class BASE
{
public:
	virtual void display() {
		cout << "Base.display() virtual" << endl;
	}
};
#endif // ! BASE_H

#ifndef COUNT_H
#define COUNT_H
#include <iostream>
#include <string>
using namespace std;
class Count
{
	friend void set(Count&, int);
	friend void set(Count&, string);// overloading hàm friend, compiler tự chọn dựa vào kiểu và số lượng tham số

private:
	string name;
	int age;
public:
	Count(string name, int age);
	void print() const;

};
#endif // !COUNT_H


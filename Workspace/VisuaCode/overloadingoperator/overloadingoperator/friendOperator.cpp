//#include <iostream>
//using namespace std;
//class X
//{
//private:
//	double real, imagine;
//	double getAbs();
//public:
//	void print();
//	X();
//	X(const X &x);// Constructor sao chép
//	X(double, double);
//	X(double);// constructor chuyển đổi
//	void operator+=(X x);
//	void operator-=(X x);
//	friend X operator+(X a, X b);	
//	friend int operator==(X a, X b);
//	friend int operator!=(X a, X b);
//};
//void X::print()
//{
//	cout << this->real<<" + " << this->imagine << endl;
//}
//X::X()
//{
//	this->real = this->imagine = 0;
//}
//X::X(double r, double i)
//{
//	this->real = r;
//	this->imagine = i;
//}
//X::X(const X &x)
//{
//	this->real = x.real;
//	this->imagine = x.imagine;
//}
//X::X(double i)
//{
//	this->real = 0.0;
//	this->imagine = i;
//}
//double X::getAbs()
//{
//	return sqrt(real*real + imagine*imagine);
//}
//void X::operator+=(X x)
//{
//	this->real += x.real;
//	this->imagine += x.imagine;
//}
//void X::operator-=(X x)
//{
//	this->real -= x.real;
//	this->imagine -= x.imagine;
//}
//X operator+(X a, X b)
//{
//	X t;
//	t.real = a.real + b.real;
//	t.imagine = a.imagine + b.imagine;
//	return t;
//}
//int operator==(X a, X b)
//{
//	return a.getAbs() == b.getAbs();
//}
//int operator!=(X a, X b)
//{
//	return a.getAbs() != b.getAbs();
//}
//int main(void)
//{
//	X x, y(4.3, 8.2), z(3.3, 1.1);
//	cout << "x: "; x.print();
//	cout << "y: "; y.print();
//	cout << "z "; z.print();
//	x = y + z;
//	cout << "x = y+ z = "; x.print();
//	x = y + 3.5;
//	cout << "x = y+3.5 = "; x.print();
//	x = 1.5 + z;
//	cout << "x = 1.5+ z: "; x.print();
//	y -= z;
//	cout << "y-= z = "; y.print();
//	y += z;
//	cout << " y += z = "; y.print();
//	if (x == y) cout << "x equal y" << endl;
//	else cout << "x not equal y" << endl;
//	if (x != y) cout << "x # y" << endl;
//	else cout << " x equal y" << endl;
//	system("pause");
//}
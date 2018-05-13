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
//	X operator-();// Hàm thành viên, toán tử một ngôi không được có tham số
//	//friend X operator-(X x);// Hàm không thành viên, có 1 tham số là object kiểu X hoặc tham chiếu tới object kiểu X
//	X operator+(X x);
//};
//X X::operator-()
//{
//	X t;
//	t.real = -this->real;
//	t.imagine = -this->imagine;
//	return t;
//}
//X X::operator+(X x)
//{
//	X t;
//	t.real = real + x.real;
//	t.imagine = imagine + x.imagine;
//	return t;
//}
////X operator-(X x)
////{
////	X t;
////	t.real = -x.real;
////	t.imagine = -x.imagine;
////}
//void X::print()
//{
//	cout << this->real<<" + " << this->imagine <<"i"<< endl;
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
//
//int main(void)
//{
//	X x(2.5, 3.5);
//	X y(3.5, 9);
//	cout << "x = "; x.print();
//	cout << "y = "; y.print();
//	X z;
//	z = -x;
//	cout << "z = -x : "; z.print();
//	z = -x + -y;
//	cout << "z = -x+ -y: "; z.print();
//	system("pause");
//}
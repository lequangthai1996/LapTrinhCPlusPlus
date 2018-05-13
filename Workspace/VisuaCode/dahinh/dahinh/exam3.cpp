//#include <iostream>
//using namespace std;
//class SoPhuc
//{
//private:
//	double real, imagine;
//public:
//	SoPhuc();
//	SoPhuc(double i);
//	SoPhuc(double r, double i);
//	void print();
//	SoPhuc operator+(SoPhuc a);
//};
//SoPhuc::SoPhuc()
//{
//	this->real = this->imagine = 0;
//}
//SoPhuc::SoPhuc(double i)
//{
//	this->real = 0.0;
//	this->imagine = i;
//}
//SoPhuc::SoPhuc(double r, double i)
//{
//	this->real = r;
//	this->imagine = i;
//}
//void SoPhuc::print()
//{
//	cout << real << " + " << imagine<<"i" << endl;
//}
//SoPhuc SoPhuc::operator+(SoPhuc a)
//{
//	SoPhuc t;
//	t.real = this->real + a.real;
//	t.imagine = this->imagine + a.imagine;
//	return t;
//}
//int main(void)
//{
//	SoPhuc a(1, 2), b(5, 8);
//	(a + b).print();
//	SoPhuc *p = new SoPhuc();
//	*p = a + b;
//	p->print();
//	SoPhuc *q = new SoPhuc();
//	*q = b + 3.5;
//	q->print();
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void print(int a, int b);
//};
//class B:public A
//{
//public:
//	virtual void print(int a, double b);
//};
//void A::print(int a,int b)
//{
//	cout << "A: a= " << a << ", b =" << b << endl;
//}
//void B::print(int a, double b)
//{
//	cout << "B: a = " << a << ", b = " << b << endl;
//}
//void show(A *a)
//{
//	a->print(3,5);
//}
//int main(void)
//{
//	A *a = new A();
//	B *b = new B();
//	show(a);//Ca 2 deu goi A->print(): vi hai phuong thuc virtuaol print() khac nhau ve tham so--> 2 virtual khac nhau
//	show(b);
//	cout << "a point to " << a <<  " , b point to " << b << endl;
//	a = b;
//	cout << "after assgin a= b: a= " << a << endl;
//	show(a);//Vẫn sẽ gọi A->print() vì xem là 2 phương thức ảo khác nhau nên xem object lớp B cũng là một object lớp A,ko override
//	system("pause");
//	/*
//	Do có khai báo virtual đối với
//	phương thức B::Print(int,double), chúng ta có thể nói phương thức này sẽ mở đầu cho một đường dây
//	phương thức ảo print(int,double) mới nếu sau lớp B còn có các lớp dẫn xuất của nó.
//	*/
//
//}
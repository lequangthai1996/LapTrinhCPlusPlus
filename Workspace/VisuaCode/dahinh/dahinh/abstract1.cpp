//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void print() = 0;
//};
//class B : public A
//{
//public:
//	virtual void print();
//};
//class C : public B
//{
//public:
//	virtual void print();
//};
//class D :public B
//{
//	//Kế thừa từ lớp B nhưng ko định nghĩa p/thức thuần ảo print()-->C là lớp trừu tượng
//public:
//	virtual void cmnr() = 0;
//};
//class E : public D
//{
//public:
//	virtual void print() {
//		cout << "e.print()" << endl;
//	}
//	virtual void cmnr()
//	{
//		cout << "e.cmnr()";
//	}
//};
//void B::print() {
//	cout << "b.print()" << endl;
//}
//void C::print() {
//	cout << "c.print()" << endl;
//}
//void show(A *a)
//{
//	a->print();
//}
//int main(void)
//{
//	B *b = new B();
//	C c;
//	E *e = new E();
//	show(e);// vì ko định nghĩa p/thức trừu ảo print() trong D nên print() được kế thừa từ D và D trở thành lớp trừu tượng
//	show(b);// do đó e thừa kế D, sẽ thừa kế p/thức trừu tượng của A thông qua D
//	show(&c);
//	system("pause");
//}
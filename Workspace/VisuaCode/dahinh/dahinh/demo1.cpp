//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void display();
//};
//class Derived: public Base
//{
//public:
//	virtual void display();
//};
//
//void Base::display()
//{
//	cout << "class Base->display" << endl;
//}
//void Derived::display()
//{
//	cout << "class Derived->display" << endl;
//}
//void show(Base *b)
//{
//	b->display();
//}
//int main(void)
//{
//	Base *b1 = new Base();
//	Derived *d1 = new Derived();
//	b1->display();
//	d1->display();
//	show(b1);
//	show(d1);//Nếu không khai báo virtual thì sẽ gọi Base::display() vì xem  đối tượng lớp dẫn xuất cũng là đối tượng lớp cơ sở 
//	system("pause");
//}
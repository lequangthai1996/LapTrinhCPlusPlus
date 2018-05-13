//#include <iostream>
//using namespace std;
//class A {
//private:
//	int a;
//	int b;
//public:
//	A(int a, int b);
//	void set(int a, int b) {
//		this->a = a;
//		this->b = b;
//	}
//	void print(){
//		cout << this->a << "  " << this->b << endl;
//	}
//	
//	int get_a() const;
//	int get_b() const;// apply for const object,
//	int get_a();
//	int get_b();// apply for non-const object,overloading get_b() const
//};
//A::A(int a, int b) {
//	this->a = a;
//	this->b = b;
//}
//int A::get_a() const {
//	return this->a;
//}
//int A::get_b() const {
//	return this->b;
//}
//int A::get_a() {
//	return (this->a + 1);
//}
//int A::get_b() {
//	return (this->b + 1);
//}
//int main(void) 
//{
//	A non_constA1(3, 4);
//	non_constA1.print();
//	int x = non_constA1.get_a();
//	const A constA2(3, 4);
//	int y = constA2.get_a();//overloading depend on type of object is const or no
//	// constA2.set(4, 7); error because conA2 is const object, so it can't be  use by non-const function
//	//constA2.print(); erorr  because conA2 is const object, so it can't be  use by non-const function
//	cout << " non const print(): ";
//	non_constA1.print();
//	non_constA1.set(10, 11);
//	non_constA1.print();
//
//
//	system("pause");
//
//}

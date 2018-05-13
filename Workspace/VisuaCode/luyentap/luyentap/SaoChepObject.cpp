//#include <iostream>
//using namespace std;
//class Time {
//private:
//	int d, m, y;
//public:
//	Time(int = 1, int = 1, int = 1990);
//	void print();
//	inline void set(int d, int m , int y);
//};
//Time::Time(int d, int m, int y) {
//	this->d = d;
//	this->m = m;
//	this->y = y;
//}
//void Time::print() {
//	cout << d << "/" << m << "/" << y << endl;
//}
//void Time::set(int d, int m, int y) {
//	this->d = d;
//	this->m = m;
//	this->y = y;
//}
//int main(void)
//{
//	Time t1(12, 2, 1990), t2;
//	t1.print();
//	t2.print();
//
//	cout << "Adress of t1: " << &t1 << endl;
//	cout << "Adress of t2: " << &t2 << endl;
//
//	t2 = t1;
//	cout << "Adress of t2 after assign: " << &t2 << endl;// Chỉ sao chép giá trị của các thành viên t1 vào thành viên t2
//	t2.print();
//	t1.set(10, 1, 1998);
//	t1.print();
//	t2.print();
//	system("pause");
//}
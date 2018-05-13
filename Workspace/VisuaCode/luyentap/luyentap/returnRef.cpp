//#include <iostream>
//using namespace std;
//class Test {
//private :
//	int h;
//public:
//	Test();
//	int& badSetHour(int x);
//	void print();
//};
//Test::Test() {
//	h  = 0;
//}
//int& Test::badSetHour(int x) {
//	if (x >= 0 && x < 24) this->h = x;
//	return h;
//}
//void Test::print() {
//	cout << h << endl;
//}
//int main(void)
//{
//	Test t;
//	t.print();
//	int& ref_h = t.badSetHour(12);
//	ref_h = 30;
//	t.print();
//	system("pause");
//}
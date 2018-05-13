//#include <iostream>
//using namespace std;
//
//class ham_ban {
//private:
//	int songuyen;
//	friend void tang1dv(ham_ban &);
//public:
//	ham_ban(int songuyen = 0) {
//		this->songuyen = songuyen;
//	}
//
//	friend void xuat(ham_ban a) {
//		cout << a.songuyen << endl;
//	}
//};
//
//void tang1dv(ham_ban &a) {
//	a.songuyen++;
//}
//
//int main() {
//	ham_ban a;
//	ham_ban b(2);
//	xuat(a);
//	xuat(b);
//	ham_ban c;
//	tang1dv(c);
//	xuat(c);
//	system("pause");
//	return 0;
//}
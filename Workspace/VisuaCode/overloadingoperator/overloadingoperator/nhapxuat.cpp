#include <iostream>
using namespace std;
class Pointer
{
private:
	double X, Y;
public:
	Pointer() {
		X = Y = 0;
	}
	friend ostream& operator<<(ostream &out, Pointer &p);// Phải là hàm friend để nhất quáns
	friend istream& operator>>(istream &in, Pointer &p);
};
ostream& operator<<(ostream &out, Pointer &p)
{
	out << "X = " << p.X << ", Y = " << p.Y << endl;
	return out;
}
istream& operator >> (istream &in, Pointer &p)
{
	cout<<"Enter X:";
	in >> p.X;
	cout << "Enter Y:";
	in >> p.Y;
	return in;
}
int main(void)
{
	//Có 2 tham số, tham số 1 là istream,ostream,chính là cin và cout
	//Tham số 2 là đối tượng của class
	Pointer p;
	cin >> p;
	cout << "Point p:";
	cout << p;
	system("pause");
}
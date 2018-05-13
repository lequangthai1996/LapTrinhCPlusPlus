#include "Vector.h"
int main(void)
{
	int n1, n2;
	cout << "Nhap so chieu vector 1: ";
	cin >> n1;
	cout << "Nhap so chieu vector 2: ";
	cin >> n2;
	VECTOR v1(n1);
	cin >> v1;
	VECTOR v2(n2);
	cin >> v2;
	cout << "Phan tu thu 2 cua Vector v1:" << v1[1] << endl;
	cout << "Tong 2  vector: " << v1 + v2 << endl;
	cout << "Hieu 2 vector: " << v1 - v2 << endl;
	cout << "Tich 2 vector: " << v1*v2 << endl;
	cout << "Do dai 2 vector: " << (v1^v2) <<endl; 
	system("pause");
	
}
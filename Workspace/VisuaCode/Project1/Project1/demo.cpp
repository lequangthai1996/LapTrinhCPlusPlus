#include "Vector.h"

int main()
{
	int n;
	while (1) {
		cout << endl << "Nhap so chieu vector 1: ";
		if (checkInput(n) == true) break;
	}
	VECTOR v1(n);
	cin >> v1;

	while (1) {
		cout << endl << "Nhap so chieu vector 2: ";
		if (checkInput(n) == true) break;
	}
	VECTOR v2(n);
	cin >> v2;

	cout << endl << "Vector 1: " << v1;
	cout << endl << "Vector 1: " << v2;
	cout << endl << "Cong hai vector: " << v1 + v2;
	cout << endl << "Tru hai vector: " << v1 - v2;
	cout << endl << "Tich vo huong: " << v1*v2 << endl;
	cout << endl << "Do dai 2 vector: " << (v1^v2) << endl;

	return 0;
}

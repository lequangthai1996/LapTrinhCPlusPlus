#include "Circle.h"
#include "Pointer.h"
int main(void)
{
	Pointer *pointPtr, p(3.5, 5.8);
	Circle *circlePtr, c(5, 1.5, 3.5);
	cout << "Pointer p:" << p << endl;
	cout << "Circle c: " << c << endl;


	//Xử lí một Circle như một Point
	pointPtr = &c;//Một Circle là một Point
	cout << endl << "Circle C(via *pointPtr): " << *pointPtr << endl;
	pointPtr->display();
	//Xử lí một Circle như một Circle
	pointPtr = &c;
	circlePtr = (Circle *)pointPtr;// ép kiểu
	cout << endl << "Circle c (via *CirclePtr: " << *circlePtr << ", ";
	cout << "Area of C: " << circlePtr->Area() << endl;
	circlePtr->display();

	//Nguy hiểm, xem một Point như một circle
	pointPtr = &p;
	circlePtr = (Circle *)pointPtr;
	cout << "Point p via *criclePtr: " << *circlePtr << ",";
	cout << "Area = " << circlePtr->Area() << endl;
	system("pause");
}
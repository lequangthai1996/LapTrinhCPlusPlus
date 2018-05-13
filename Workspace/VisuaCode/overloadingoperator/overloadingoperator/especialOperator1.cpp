//#include <iostream>
//using namespace std;
//class Vector
//{
//private:
//	int Size;
//	int *Data;
//public:
//	Vector(int S, int V = 0);
//	~Vector();
//	void print();
//	int& operator[](int index);
//};
//Vector::Vector(int S, int V)
//{
//	this->Size = S;
//	this->Data = new int[S];
//	for (int i = 0; i < S; i++)
//	{
//		this->Data[i] = V;
//	}
//}
//Vector::~Vector()
//{
//	delete[] Data;
//}
//int& Vector::operator[](int index)
//{
//	return this->Data[index];// Yên tâm là tham chiếu này ko chiếm dụng vì nó đã được cấp phát động
//}
//void Vector::print()
//{
//	cout << "( ";
//	for (int i = 0; i < Size - 1; i++) cout << this->Data[i] << ",";
//	cout << this->Data[Size - 1] << " )";
//	cout << endl;
//}
//int main(void)
//{
//	Vector x(5, 3);
//	cout << "Value of x: "; x.print();
//	x[1] = 7; x[2] = 8; x[3] = 9;
//	cout << "Value of x after change: ";
//	x.print();
//	system("pause");
//}
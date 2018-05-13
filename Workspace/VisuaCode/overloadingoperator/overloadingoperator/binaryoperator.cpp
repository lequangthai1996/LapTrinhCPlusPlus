//#include <iostream>
//using namespace std;
//class COMPLEX
//{
//private:
//	double real, imagine;
//	double getAbs();
//public:
//	COMPLEX();
//	COMPLEX(double);
//	COMPLEX(double, double);
//	COMPLEX(const COMPLEX &c);
//	void print();
//	COMPLEX operator+(COMPLEX c);
//	COMPLEX operator+=(COMPLEX c);
//	void operator-=(COMPLEX c);
//	int operator==(COMPLEX c);
//	int operator!=(COMPLEX c);
//	int operator<=(COMPLEX c);
//	int operator>=(COMPLEX c);
//};
//double COMPLEX::getAbs()
//{
//	return sqrt(real*real + imagine*imagine);
//}
//COMPLEX::COMPLEX()
//{
//	this->real = this->imagine = 0;
//}
//COMPLEX::COMPLEX(double i)
//{
//	this->real = 0.0;
//	this->imagine = i;
//}
//COMPLEX::COMPLEX(double r, double i)
//{
//	this->real = r;
//	this->imagine = i;
//}
//COMPLEX::COMPLEX(const COMPLEX &c)
//{
//	this->real = c.real;
//	this->imagine = c.imagine;
//}
//COMPLEX COMPLEX::operator+(COMPLEX c)
//{
//	COMPLEX t;
//	t.real = this->real + c.real;
//	t.imagine = this->imagine + c.imagine;
//	return t;
//}
//COMPLEX COMPLEX::operator+=(COMPLEX c)
//{
//	this->real += c.real;
//	this->imagine += c.imagine;
//	return *this;
//}
//void COMPLEX::operator-=(COMPLEX c)//Không cần trả về cũng được, vì ta chỉ thay đổi đối tượng this mà gọi nó
//{
//	this->real -= c.real;
//	this->imagine -= c.imagine;
//}
//int COMPLEX::operator==(COMPLEX c)
//{
//	return (this->real == c.real) && (this->imagine == c.imagine);
//}
//int COMPLEX::operator!=(COMPLEX c)
//{
//	 return (this->real == c.real) && (this->imagine == c.imagine);
//}
//int COMPLEX::operator<=(COMPLEX c)
//{
//	return this->getAbs() <= c.getAbs();
//}
//int COMPLEX::operator>=(COMPLEX c)
//{
//	return this->getAbs() >= c.getAbs();
//}
//void COMPLEX::print()
//{
//	cout << this->real << " + " << this->imagine << "i" << endl;
//}
//int main(void)
//{
//	COMPLEX *c1 = new COMPLEX(1.5, 2.5);
//	COMPLEX *c2 = new COMPLEX(*c1);
//	cout << "c1 is : "; c1->print();
//	cout << "c2 is : "; c2->print();
//	if ((*c1) == (*c2)) cout << "c1 equal c2" << endl;
//	else cout << "c1 not equal c2" << endl;
//	COMPLEX *c3 = new COMPLEX(5.5,6);
//	(*c3) += (*c1); // Lấy ra tham chiếu dereferen để gọi, tương tự như lấy ra đối tượng c3 bình thường
//	cout << "c3 is: ";	c3->print();
//	COMPLEX *c4 = new COMPLEX(2,3);
//	(*c4) -= (*c1); 
//	cout << "c4 is: "; c4->print();
//	if ((*c4) >= (*c1)) cout << "c4 is greater or equal c1" << endl;
//	else cout<< "c4 is lower than c1" << endl;
//	if ((*c3) >= (*c1)) cout << "c3 is greater or equal c1" << endl;
//	else cout << "c3 is greater than c1 " << endl;
//	COMPLEX *c5 = new COMPLEX(3, 4.5);
//	c5->operator-=(*c1);
//	cout << "c5(3,4.5) -= c1(1.5,2.5) = "; c5->print();
//	COMPLEX c6 = 3.5;//Chuyển đổi ngầm định thành COMPLEX(double i);
//	c6.print();
//	COMPLEX c7;
//	c7 = *c1 + *c2; // Dấu = ở đây ứng với constructor sao chép chứ không phải phép gán
//	cout << "c7 = c1+ c2 is : "; c7.print();     // Nó tự động gọi gọi COMPLEX(const COMPLEX &c)
//	COMPLEX c9;
//	c9 = *c1 + 3.5;// 3.5 được ép kiểu ngầm định thành COMPLEX(double i)
//	cout << "c9 = c1 +3.5 is: "; c9.print();
//	COMPLEX c10(c7); //  gọi constructor sao chép COMPLEX(const COMPLEX &c)
//	cout << "Sao chép c10 từ c7: "; c10.print();
//	c10 = c9; // gọi constructor sao chép COMPLEX(const COMPLEX &c)
//	cout << "Sao chép c10 từ c9: "; c10.print();
//	cout << endl;   
//	system("pause");
//}

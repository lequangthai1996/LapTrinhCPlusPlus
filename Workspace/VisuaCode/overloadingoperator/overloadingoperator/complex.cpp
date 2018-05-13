//#include <iostream>
//using namespace std;
//class Complex
//{
//friend Complex operator+(int ,Complex c);
//private:
//	double real, imagine;
//public:
//	Complex(double = 0, double = 0);
//	Complex operator+(Complex c);
//	Complex operator+(double real);
//	Complex* operator-(const Complex* c);
//	void print();
//};
//Complex::Complex(double r, double i)
//{
//	this->real = r;
//	this->imagine = i;
//}
//Complex Complex::operator+ (Complex c)
//{
//	Complex t;
//	t.real = this->real + c.real;
//	t.imagine = this->imagine + c.imagine;
//	return t;
//}
//Complex Complex::operator+ (double r)
//{
//	Complex t;
//	t.real = this->real + r;
//	t.imagine = this->imagine;
//	return t;
//}
//Complex*  Complex::operator-(const Complex * c)
//{
//	Complex *t = new Complex();
//	cout <<endl<< "t point to  address " << t << endl;
//	t->real = this->real - c->real;
//	t->imagine = this->imagine - c->imagine;
//	return t;// Trả về con trỏ kiểu Complex(thực chất trả về địa chỉ của t)
//	//Tham số là con trỏ kiểu Complex ==> truyền vào địa chỉ của object kiểu Complex hoặc con trỏ kiểu Complex
//	// đối tượng gọi toán tử trừ (-) có thể là con trỏ kiểu Complex hoặc object thông thường
//}
//void Complex::print()
//{
//	cout << endl << this->real<<" + " << this->imagine << "i";
//}
//
//Complex operator+(int x,Complex c)
//{
//	Complex  t;
//	t.real = x + c.real;
//	t.imagine = c.imagine;
//	return t;
//}
//int main(void)
//{
//	
//	Complex c1(5.2, 10.5);
//	Complex c2(4.8, 0.5);
//	Complex c3 = c1+c2;
//	c3.print();
//	Complex c4 = c1 + 5;
//	c4.print();
//	Complex *c5 = c1 - &c2;// c2 phải là kiểu con trỏ nên ta truyền địa chỉ của object c2
//	cout << endl << "c5 pointer to address: " << c5 << endl;
//	c5->print();// hoặc (*c5).print(); dùng dereferen
//	
//	Complex *c6 = new Complex(8, 4);
//	Complex *c7 = new Complex(2.5, 0.5);
//	Complex *c8 = *c6  -  c7;// c7 phải là con trỏ kiểu Complex hoặc địa chỉ của object kiểu Complex								
//	c8->print();            //c6 là kiểu object thông thường nên dùng toán tử dereference
//	(*c8).print();  //2 cách in như nhau
//	Complex *c9 = new Complex();//cấp phát bộ nhớ động
//	*c9 = c1 + c2;// Gán lại giá trị cho object kiểu Complex mà c9 trỏ tới bằng toán tử dereference
//	c9->print();  // áp dụng cho object local thì c1+ c2 bình thường
//	Complex *c10 = new Complex();
//	*c10 = *c5 + *c6 + *c7;// áp dụng cho con trỏ, dùng toán tử dereference cho con trỏ
//	cout << endl << "c10 :";
//	c10->print();
//	// Như vậy ta nên dùng cách nào, trả về con trỏ hay kiểu  object thông thường
//	// Ta nên cấp phát động như c9 và c10, sau đó gán lại giá trị tại địa chỉ mà c9,c10 trỏ
//	// tới , nếu đối số là object local thông thường thì ok, còn là con trỏ thì dùng dereference để
//	// get ra giá trị chuyển sang kiểu object Complex thông thường
//	Complex *objEs = new Complex();
//	*objEs = -5 + c1; // vì 5 không phải là object kiểu Complex nên đa năng hóa toán tử
//	// + phải là hàm không thành viên(thường là hàm friend nếu hàm được đa năng hóa truy cập
//	// tới các trường private hay protected của lớp , ở đây ta thấy operator+(int,Complex c)
//	//có truy cập  tới trường real,imagine thông qua  t.real,t.imagine,c.real,c.imagine nên 
//	// hàm này phải là friend(Nếu có phương thức get,set phù hợp thì không cần là hàm friend)
//	objEs->print();
//	system("pause");
//
//}
//
//

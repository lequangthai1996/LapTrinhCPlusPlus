//#include <iostream>
//using namespace std;
//class Time2 {
//private:
//	int day, month, year;
//	void show();
//public:
//	Time2(int = 1, int = 1, int = 2000);
//	void print() const;
//	Time2&  setDay(int);
//	Time2& setMonth(int);
//	Time2& setYear(int);
//};
//void Time2::show(){
//	
//	this->year = -1000;// mà đáng lẻ nó không có quyền gọi.
//}
//Time2::Time2(int d, int m, int y)
//{
//	this->day = d;
//	this->month = m;
//	this->year = y;
//}
//void Time2::print() const
//{
//	cout << day << "/" << month << year << endl;
//}
//Time2& Time2::setDay(int d)
//{
//	this->day = d;
//	return *this;// Trả về tham chiếu kiểu Time, nên ta trả về đối tượng kiểu time thông 
//	//qua toán tử dereferen, tức là trả về tham chiếu tới đối tượng hiện tại
//	// do đó đối tượng này có thể gọi phương thức của nó 
//	//Như vậy tên hàm giống là một tham chiếu tới đối tượng
//	// 
//}
//Time2& Time2::setMonth(int m)
//{
//	this->month = m;
//	return *this;
//}
//Time2& Time2::setYear(int y)
//{
//	this->year = y;
//	return *this;
//}
//int main(void)
//{
//	Time2 time(2, 3, 1996);
//	time.print();
//	//Không thể gọi time.setDay(5).show() vì show là private, time.setDay(4) giờ giống như là tên time vậy
//	// ta khỏi cần gọi lại time.setMonth() mà gọi liên tiếp
//	time.setDay(5).setMonth(9).setYear(1997);
//	time.print();
//	system("pause");
//}

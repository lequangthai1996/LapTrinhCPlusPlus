//#include <iostream>
//#include <string>
//using namespace std;
//class Date
//{
//public:
//	Date(int = 1, int = 1, int = 2000);
//	void print() const;
//private:
//	int m, d, y;
//	int checkDay(int);
//};
//class Employee
//{
//public:
//	Employee(char *, char *, int, int, int);
//	void print() const;
//private:
//	char lastName[25];
//	char firstName[25];
//	Date birthDate;
//};
//Date::Date(int d, int m, int y)
//{
//	if (m > 0 && m <= 12) this->m = m;
//	else {
//		this->m = 1;
//		cout << "Month " << m << " invalid .set to month =1 ";
//	}
//	this->y = y;
//	this->d = checkDay(d);
//}
//int Date::checkDay(int testday)
//{
//	static int daypermonth[] = {
//		0,31,28,31,30,31,30,31,31,30,31,30,31
//	};
//	if (testday > 0 && testday <= daypermonth[this->m]) return testday;
//	if (this->m == 2 && testday == 29 && (this->y % 400 == 0 || (this->y % 4 == 0 && this->y % 100 != 0)) )return testday;
//	cout << "Day " << testday << " is invalid. Set to Day 1" << endl;
//	return 1;
//}
//void Date::print() const
//{
//	cout << this->d << "/" << this->m << "/" << this->y << endl;
//}
//Employee::Employee(char* fname, char* lname, int d, int m, int y):birthDate(d,m,y)
//{
//	int length = strlen(fname);
//	length = length < 25 ? length : 24;//kích thước mảng 25 char f[25] nhưng lưu tối đa 24 kí tự vì kí tự \0 cuối cùng nữa
//	strncpy_s(this->firstName, fname, length);
//	this->firstName[length] = '\0';
//	length = strlen(lname);
//	length = (length < 25) ? length : 24;
//	strncpy_s(this->lastName, lname, length);
//}
//void Employee::print() const
//{
//	cout << this->firstName << "  " << this->lastName << endl;
//	cout << "Date of birth: "; this->birthDate.print();
//	cout << endl;
//}
//int main(void)
//{
//	Employee E("Le quang", "thai", 1, 1, 1996);
//	E.print();
//	Date D1(14, 35, 94);
//	Date D2(29, 2, 2002);
//	system("pause");
//}
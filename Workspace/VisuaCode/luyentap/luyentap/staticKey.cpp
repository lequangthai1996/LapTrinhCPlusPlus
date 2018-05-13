//#include <iostream>
//#include <string>
//#include <assert.h>
//using namespace std;
//#pragma warning(disable : 4996) 
//class ABC {
//private:
//	char* firstname;
//	char* lastname;
//	static int count;
//public:
//	char* getfirstName();
//	char* getlastName();
//	static int getCount();
//	ABC( char*,  char*);
//	~ABC();
//};
//ABC::ABC( char* fname,  char* lname)
//{
//	this->firstname = new char[strlen(fname) + 1];
//	this->lastname = new char[strlen(lname) + 1];
//	//assert(firstname != 0);
//	strcpy(firstname, fname);// hàm strcpy sao chép cả kí tự kết thúc '\0'
//	//assert(lastname != 0);
//	strcpy(lastname, lname);
//	count++;
//}
//int ABC::getCount()
//{
//	return count;// trả về static field, có thể return count cũng được
//}
//char* ABC::getfirstName()
//{
//	return this->firstname;// hoặc return ABC::firstname như nhau
//}
//char* ABC::getlastName()
//{
//	char* temp = new char[strlen(lastname) + 1];
//	strcpy(temp, this->lastname);
//	return temp; // trả về con trỏ kiểu char đã được cấp phát vùng nhớ
//}
//ABC::~ABC()
//{
//	cout << endl << "destructor object name " << firstname << endl;
//	delete firstname;// xóa vùng nhớ đã cấp phát
//	delete lastname;
//	count--;
//}
//int ABC::count = 0;// Khởi tạo thành viên dữ liệu tĩnh
//int main(void)
//{
//	ABC *obj1 = new ABC("thai", "le");
//	cout << endl << "after 1 object is created:" << ABC::getCount();
//	cout << endl << obj1->getfirstName(); //Không an toàn khi trả về con trỏ tới thành viên private
//	char* p = obj1->getfirstName();
//	p[1] = '\0';//Nguy hiểm chưa, sau khi set lại giá trị thì trường firstname chỉ còn: 't'
//	cout << endl << obj1->getfirstName() << endl;
//	ABC *obj2 = new ABC("anh", "nguyen");
//	char* p2 = obj2->getlastName();
//	cout << "obj2 last name: " << p2 << ", "<<obj2->getlastName()<<endl;
//	delete p2; // Xóa vùng nhớ đã cấp phát khi trả về lastname 
//	cout << "Count after create obj2: " << obj2->getCount() << endl;
//	delete obj1;
//	delete obj2;
//	cout << "after destructor: " << ABC::getCount() << endl;
//	system("pause");
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Destructor {
//private:
//	int *X;
//	string name;
//public:
//	Destructor(string s);
//	~Destructor();
//	void print();
//};
//inline Destructor::Destructor(string s) {
//	X = new int;
//	
//	this->name = s;
//	*X = 10;
//}
//inline Destructor::~Destructor() {
//	cout << endl <<"Destructor " <<name<< endl;
//	delete X;
//}
//inline void Destructor::print() {
//	cout << "Value of X: of"<<name<<": " << (*X);
//}
//void createObject() {
//	Destructor t("d1");
//	t.print();
//}
//
//int main(void) {
//
//	createObject();
//	Destructor t("d2");
//	t.print();	
//	
//	return 0;
//	system("pause");
//}
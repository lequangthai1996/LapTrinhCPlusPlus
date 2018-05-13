//#include <iostream>
//using namespace std;
//class Tang {
//private:
//	int count;
//	const int increament;
//public:
//	Tang(int count = 0, int i =1);// if Tang(5) then count = 5,increament = 1, if Tang() then count = 0, i = 1
//	void print();
//	//void print() const;
//	void addCount();
//};
//Tang::Tang(int c, int i): increament(i)
//{
//	this->count = c;
//}
//void Tang::print() {
//	cout << this->count << " , " << this->increament << endl;
//}
//void Tang::addCount()
//{
//	this->count += this->increament;
//}
//int main(void)
//{
//	Tang t1;
//	t1.print();
//	t1.addCount();
//	t1.addCount();
//	t1.print();
//	Tang t2(10, 5);
//	t2.addCount();
//	t2.addCount();
//	t2.print();
//	system("pause");
//}
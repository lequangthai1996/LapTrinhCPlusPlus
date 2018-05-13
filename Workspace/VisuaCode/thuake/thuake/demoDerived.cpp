//#include "Derived.h"
//#include "Base1.h"
//#include "Base2.h"
//int main()
//{
//	Base1 b1(5), *base1Ptr;
//	Base2 b2('m'), *base2Ptr;
//	Deriverd d(10, 'q', 3.5);
//	cout << "Object b1 contain interger: " << b1.getData() << endl;
//	cout << "Object b2 contain character: " << b2.getData() << endl;
//	cout << "Object d contain: " << d << endl;
//	cout << "Data member of Deriverd can be access individually: " << endl;
//	cout << "Integer: " << d.Base1::getData() << endl;
//	cout << "Character: " << d.Base2::getData() << endl;
//	base1Ptr = &d;
//	cout << "base1Ptr->getData(): " << base1Ptr->getData() << endl;
//	base2Ptr = &d;
//	cout << "base2Ptr->getData(): " << base2Ptr->getData() << endl;
//	system("pause");
//}
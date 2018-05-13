#include "STACK.h"


int main()
{
	STACK s(5);
	for (int i = 1; i <= 5; i++) {
		s.push(i);
	}
	cout << endl << "Num of stack: " << s.numOfElements() << endl;

	s.print();

		
	s.pop();
	cout << endl << "Num after pop: " << s.numOfElements() << endl;
	s.print();

	s.pop();
	cout << endl << "Num after pop: " << s.numOfElements() << endl;
	s.print();

	s.pop();
	cout << endl << "Num after pop: " << s.numOfElements() << endl;
	s.print();

	

	s.push(10);
	cout << endl << "Num after push: " << s.numOfElements() << endl;
	s.print();
	cout << endl;
	


	// Minh họa xóa vùng nhớ của cấp phát động  bằng con trỏ Stack
	cout << endl << endl<< "STACK p" << endl;
	STACK *p = new STACK;
	p->push(1);
	p->push(5);
	p->print();
	delete p;
	system("pause");
}

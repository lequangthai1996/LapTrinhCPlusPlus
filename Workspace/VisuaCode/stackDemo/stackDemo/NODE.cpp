#include "NODE.h"
int NODE::id = 0;
NODE::NODE(int value) 
{
	this->item = value;
	current_id = ++id;
	this->next = NULL;
}
NODE::~NODE()
{
	
	cout << endl<<"delete Node: " << this->item;// Khi pop stack thì đã gọi delete rồi nên mỗi lần pop sẽ in ra dòng này
	id--;
}

void NODE::print()
{

	cout << endl << current_id << ": " << item;
}

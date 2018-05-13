#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class NODE
{
friend class STACK;
public:
	
	NODE(int);
	~NODE();	
	
	void print();
private:
	int item;
	int current_id;
	static int id;
	NODE *next;
};
#endif // NODE_H

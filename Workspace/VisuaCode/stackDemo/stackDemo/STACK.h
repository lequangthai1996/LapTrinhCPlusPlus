#ifndef STACK_H
#define STACK_H
#include "NODE.h"

class STACK
{
public:
	STACK(int = 1);
	~STACK();
	
	void push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	int numOfElements();
	void print();
private:
	NODE *top;
	static int current;
	const int maxSize;
};
#endif // STACK_H

#include "STACK.h"
int STACK::current = 0;
STACK::STACK(int max) : maxSize(max)
{
	top = NULL;
}
STACK::~STACK()
{
	NODE *tmp = this->top;
	while (tmp != NULL)
	{		
		NODE *p = tmp;
		tmp = tmp->next;
		delete p;
	}
}

bool STACK::isEmpty()
{

	if (current == 0) return true;
	else return false;
}
bool STACK::isFull()
{
	if (current == maxSize) return true;
	else return false;
}
void STACK::push(int x)
{
	if (!this->isFull()) 
	{
		NODE *tmp = new NODE(x);
		if (this->isEmpty()) 
		{
			this->top = tmp;
		}
		else 
		{
			tmp->next = top;
			top = tmp;
		}
		STACK::current++;
	}
}
int STACK::pop()
{
	if (!this->isEmpty()) 
	{
		int x = top->item;
		current--;

		NODE *tmp = top;
		top = top->next;
		delete tmp;

		return x;
	}
	else 
	{
		cout << endl << "Stack is empty!";
	}

}
int STACK::numOfElements()
{
	return current;
}
void STACK::print()
{
	NODE *tmp = this->top;
	while (tmp != NULL) 
	{
		tmp->print();
		tmp = tmp->next;
	}
}

#include <iostream>
using namespace std;
typedef int item;
struct Node {
	item data;
	Node *next;
};
struct Stack {
	Node *top;
};
void init(Stack &s)
{
	s.top = NULL;
}
bool isEmpty(Stack s)
{
	if (s.top == NULL) return true;
	else return false;
}
int len(Stack s)
{
	Node *p = s.top;
	int dem = 0;
	while (p != NULL)
	{
		dem++;
		p = p->next;
	}
	return dem;
}
Node *makeNode(item x)
{
	Node *p = new Node;
	p->next = NULL;
	p->data = x;
}
void push(Stack &s, item x)
{
	Node *p = makeNode(x);
	p->next = s.top;// p tro toi phan tu dau tien cua Node
	s.top
}
item  pop(Stack &s) {
	item x = s.top->data;
	Node *p = s.top;// De xoa dia chi nay
	s.top->next= s.top.next;
}

#include <iostream>
using namespace std;
typedef int item;
struct Node
{
	item data;
	Node *next;
};
typedef Node *List;
void init(List &L)
{
	L = NULL;
}
bool isEmpty(List L)
{
	return (L == NULL);
}
int len(List L)
{
	Node *p = L;
	int dem = 0;
	while (p != NULL)
	{
		dem++;
		p = p->next;
	}
	return dem;
}
Node* makeNode(Node *p, item data)
{
	p = new Node;
	p->next = NULL;
	p->data = data;
	return p;
}
void insertFirstNode(List &L, item data)
{
	Node *p = NULL;
	p = makeNode(p, data);
	p->next = L;
	L = p;
}
void printList(List L)
{
	Node *p = L;
	while (p != NULL)
	{
		cout << p->data << "  ";
		p = p->next;
	}
	cout << endl;
}
void insert_k(List &L, item data, int k)
{
	Node *p = NULL, *q = L;
	int i = 1;
	if (k <= 0 || k > len(L) + 1) {
		cout << "vi tri chen ko hop le";
	}
	else {
		p = makeNode(p, data);
		while (q != NULL && i != k - 1) {
			q = q->next;//q la node thu 2, tang i len 2
			i++;
		}
		p->next = q->next;
		q->next = p;
	}
}
int searchItem(List L, item data)
{
	Node *p = L;

}
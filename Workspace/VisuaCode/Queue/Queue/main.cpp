#include <iostream>
using namespace std;
typedef int item;
struct Node
{
	item data;
	Node *next;
};
struct Queue
{
	Node *front, *last;
	int count;
};
void init(Queue &Q)
{
	Q.front = NULL;
	Q.last = NULL;
	Q.count = 0;
}
bool isEmpty(Queue Q)
{
	if (Q.count == 0) return true;
	else return false;
}
Node *makeNode(item data)
{
	Node *p = new Node;
	p->data = data;
	p->next = NULL;
	return p;
}
void push(Queue &Q, item data)
{
	Node *p = makeNode(data);
	if (isEmpty(Q)) {
		Q.front = p; 
		Q.last = p; // p.next = NULL , do đó Node *next của Q.last = NULL, hay Node cuối cùng trỏ tới NULL

	}else {
		Q.last->next = p;// Cho Node *next của Node cuối hiện tại trỏ đến p
		Q.last = p; // Cho Node cuối trỏ tới p 
	}
	Q.count++;

}
item pop(Queue &Q)
{
	if (isEmpty(Q)) {
		cout << "Queue is empty" << endl;
		return 0;
	}
	else {
		item x = Q.front->data;
		Node *p = Q.front; //Luu dia chi Node dau tien
		Q.front = Q.front->next;
		Q.count--;
		delete p;
		return x;
	}
}
void printQueue(Queue Q)
{
	if (!isEmpty(Q)) {
		Node *p = Q.front;
		while (p != NULL) {
			cout << p->data << "  ";
			p = p->next;
		}
	}
}
int main()
{
	Queue q;
	init(q);
	push(q, 3);
	push(q, 7);
	push(q, 8);
	printQueue(q);
	cout << pop(q) << endl;
	printQueue(q);
	system("pause");
	
}
#include <iostream>
using namespace std;
typedef int item;
struct Node
{
	item data;
	Node *next;
};
struct Stack
{
	Node *Top;
};
void init(Stack &s)
{
	s.Top = NULL;
}
bool isEmpty(Stack s)
{
	if (s.Top == NULL) return true;
	else return false;
}
int len(Stack s)
{
	Node *p = s.Top;// p là con trỏ trỏ tới Node trên cùng của Stack(TOP)
	int dem = 0;
	while (p != NULL) {
		dem++;
		p = p->next;//p trỏ tới Node tiếp theo
	}
	return dem;
}
Node *makeNode(item data)
{
	Node *p = new Node;// Cấp phát vùng nhớ
	p->data = data;
	p->next = NULL;
	return p;
}
void push(Stack &s,item data)
{
	Node *p = makeNode(data);
	//Node *q = s.Top;//p Trỏ tới Top;
	p->next = s.Top;// Tức là nếu ban đâu ko có Node nào thì p-next = NULL, s.Top = p
	                //Nếu mà đã có Node thì p-next = s.Top = địa chỉ phần tử đầu tiên của Stack, còn s.Top = địa chỉ của p
					// Mà ta mới chèn, như vậy Node cuối cùng của Stack là trỏ đến NULL
	s.Top = p;
}
item pop(Stack &s)
{
	if (!isEmpty(s)) {
		item x = s.Top->data;//Lấy dữ liệu

		Node *q = s.Top;// Lưu lại địa chỉ Node đầu tiên
		s.Top = s.Top->next;// Cho Top chứa địa chỉ của Node tiếp theo
		delete q;// Thu hồi vùng nhớ xóa
		return x;

	}
	else {
		return NULL;
	}

}
void printStack(Stack s)
{
	Node *p = s.Top; // P trỏ tới Node đầu tiên của Stack
	if (!isEmpty(s)) {
		while (p != NULL) {
			cout << p->data << "  ";
			p = p->next;
		}
	}
}
int main()
{
	Stack s;
	init(s);
	push(s, 3);
	push(s, 5);
	push(s, 7);
	printStack(s);
	cout << "Len of stack: " << len(s);
	cout<<" gia tri Node dau tien: " << pop(s) << endl;
	printStack(s);
	system("pause");
}
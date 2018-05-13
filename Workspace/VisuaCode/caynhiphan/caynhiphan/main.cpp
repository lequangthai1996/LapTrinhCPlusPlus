#include <iostream>
using namespace std;
typedef int item;
struct Node
{
	item key;// khoa cua du lieu
	Node *left, *right;
};
typedef Node* Tree;
int insertNode(Tree &T, item x)
{
	if (T != NULL)
	{
		if (T->key == x) return -1; //Node nay da co
		if (x < T->key) return insertNode(T->left, x);
		else if (x > T->key) return insertNode(T->right, x);
	}
	T = new Node;
	if (T == nullptr) return 0;//Khong du bo nho
	T->key = x;
	T->left = T->right = NULL;
	return 1;
}
void createTree(Tree &T)
{
	int x;
	while (1)
	{
		cout << "Nhap vao Node: ";
		cin >> x;
		if (x == 0) break;// thoat
		int check = insertNode(T, x);
		 if (check == -1) cout << "Node da ton tai";
		 else if (check == 0) cout << "Ko du bo nho";
		 
	}
}
void LNR(Tree T)
{
	if (T != NULL)
	{
		LNR(T->left);
		cout << T->key << ", ";
		LNR(T->right);
	}
}
void NLR(Tree T)
{
	if (T != NULL)
	{
		cout << T->key << ",";
		NLR(T->left);
		NLR(T->right);
	}
}
Node* searchKey(Tree T, item x)
{
	if (T != NULL)
	{
		if (T->key == x) {
			Node *p = T;
			return p;
		};
		if (x < T->key) return searchKey(T->left, x);
		if (x > T->key) return searchKey(T->right, x);
	}
	return NULL;
}
int main(void)
{
	Tree T;
	T = NULL;// Tao cay rong
	createTree(T);//Nhap cay;
	cout << "Duyet cay theo LNR: ";
	LNR(T);
	cout << endl << "Duyet cay theo NLR:";
	NLR(T);
	Node *p;
	item x;
	cout << "Nhap vao key can tim kiem";
	cin >> x;
	p = searchKey(T, x);
	if (p != NULL) cout << "Tim they key " << p->key << endl;
	else cout << "Key " << x << " khong co trong cay";
	system("pause");
	return 0;

}
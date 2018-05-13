#include "Count.cpp"
int main(void)
{
	string s = "thai";
	Count c(s, 19);
	c.print();
	set(c, 25);
	cout << "After change by set() friend function: ";
	c.print();
}

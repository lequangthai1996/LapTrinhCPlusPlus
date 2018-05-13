//#include <iostream>
//using namespace std;
//int main(void)
//{
//	int *p1 = new int(5);
//	int *p2 = new int(6);
//	int *p3 = new int(7);
//	int **pto = new int*[3];
//	pto[0] = p1;
//	pto[1] = p2;
//	pto[2] = p3;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << *pto[i];
//	}
//	int **ptoArr;
//	ptoArr = new int*[3];
//	for (int i = 0; i < 3; i++)
//	{
//		ptoArr[i] = new int[3];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "p[" << i << "][" << j << "] : ";
//			cin >> ptoArr[i][j];
//		}
//	}
//	cout << "________________" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) cout << ptoArr[i][j] << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
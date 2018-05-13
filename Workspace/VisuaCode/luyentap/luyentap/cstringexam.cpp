//#include <iostream>
//#include <string>
//using namespace std;
//int main(void)
//{
//	char s1[25] = "Xin chao";
//	cout << s1 << endl;
//	for (int i = 0; i < 25; i++) {
//		if (s1[i] != '\0') cout << s1[i] << ",";
//		else cout << "null,";
//	}
//	cout << "s1 length: " << strlen(s1);//strlen(char *) , tham số là con trỏ kí tự, nó lấy giá trị là địa chỉ của chuỗi kí
//	// tự , mà tên con trỏ và tên mảng kí tự cũng là địa chỉ của nó nên truyền tên mảng hoàn toàn phù hợp
//	char *s2 = "hello pa con";
//	cout << endl << "s2 is pointer of character: " << s2 << endl;
//	cout << "s2 length: " << strlen(s2) << endl;
//
//	//copy mảng
//	int len = strlen(s2);
//	strncpy_s(s1, s2, len);
//	s1[len] = '\0';// gán kí tự tiếp theo là null để đánh dấu kết thúc xâu, nếu không thì
//	cout << s1 << endl;// các kí tự nếu có phía sau của s1 chưa được sao chép sẽ vẫn còn
//	system("pause");
//}

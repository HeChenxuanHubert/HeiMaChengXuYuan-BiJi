#include<iostream>
using namespace std;
int main() {
	//野指针
	int* p = (int*)0x1100;
	//cout << *p << endl;读取访问权限错误

	//在程序中，尽量避免野指针

	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int main() {

	//指针所占内存空间
	int a = 10;
	int* p = &a;
	cout << "size of (int *) = " << sizeof(int *) << endl;
	//只要是在三十二位操作系统下，就是四个字节

	system("pause");
	return 0;
}
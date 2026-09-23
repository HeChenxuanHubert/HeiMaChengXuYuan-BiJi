#include<iostream>
using namespace std;
int main() {

	//指针和数组
	//利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "first element:" << arr[0] << endl;

	int* p = arr;//arr就是数组的首地址
	cout << "*p = " << *p << endl;

	p++;//让指针向后偏移四个字节（其本身为int类型的指针）
	cout << "*p = " << *p << endl;

	//利用指针遍历数组
	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
 	}

	system("pause");
	return 0;
}
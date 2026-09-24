#include<iostream>
using namespace std;
//对象的初始化和清理
class Person {
public:
	//1.构造函数
	//没有返回值、不用写void
	//函数名与类的名称相同
	//构造函数可以有参数，也可以发生重载
	//创建对象的时候构造函数会自动调用且只调用一次
	Person() {
		cout << "Person构造函数的调用" << endl;
	}
	//2.析构函数进行清理操作
	//没有返回值 不写void
	//函数名与类名相同 在名称前加~
	//析构函数不可以有参数，因此不可以发生重载
	//对象在销毁前会自动调用析构函数，且只会调用一次
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}

};
//构造和析构都是必须有的实现
//如果我们自己不提供，编译器会提供一个空实现的构造与析构
void test01() {
	Person p;
}
int main() {
	//test01();
	Person p;
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//静态成员函数
//所有的对象都共享同一个函数
//静态成员函数只能访问静态成员变量

class Person {
public:

	//静态成员函数
	static void func() {

		//静态成员函数可以访问静态成员变量
		m_A = 100;


		//！！！！！静态成员函数不可以访问非静态成员变量
		// 原因：无法区分是哪个对象的m_B
		//m_B = 200;

		cout << "static void func调用" << endl;
	}

	//静态成员变量
	static int m_A;

	//非静态成员变量
	int m_B;

	//静态成员函数也是有访问权限的
private:
	static void func2() {
		cout << "static void func2函数调用" << endl;
	}

};

int Person::m_A = 0;

//有两种访问方式
void test01() {
	//1.通过对象访问
	Person p;
	p.func();
	//2.通过类名访问
	Person::func();
	//Person::func2();无法访问
}

int main() {
	test01();
	system("pause");
	return 0;
}
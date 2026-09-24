#include<iostream>
using namespace std;

const double PI = 3.14;//圆周率

//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径

//class代表设计一个类，类后面紧跟的就是类名称
class Circle {
	//访问权限
public://公共权限
	
	//属性
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

int main() {
	//通过圆类创建具体的圆（对象）
	//实例化 通过一个类 创建一个对象的过程
	Circle c1;
	//给圆对象的属性进行赋值操作
	c1.m_r = 10;

	cout << "The ZC of the circle is:" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}
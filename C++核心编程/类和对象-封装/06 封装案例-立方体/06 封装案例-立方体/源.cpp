#include<iostream>
using namespace std;

//立方体类设计案例

//1.创建立方体类

//2.设计属性

//3.设计行为 获取立方体面积和体积

//4.分别利用全局函数和成员函数(类里面)  判断两个立方体是否相等

class Cube {
public:
	//设置长
	void setL(int l) {
		m_L = l;
	}
	//获取长
	int getL() {
		return m_L;
	}
	//设置宽
	void setW(int w) {
		m_W = w;
	}
	//获取宽
	int getW() {
		return m_W;
	}
	//设置高
	void setH(int h) {
		m_H = h;
	}
	//获取高
	int getH() {
		return m_H;
	}
	//获取立方体面积
	int calculateS() {
		return 2 * (m_L * m_W + m_W * m_H + m_L * m_H);
	}
	//获取立方体体积
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		else {
			return false;
		}
	}

private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高
};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "c1's square is:" << c1.calculateS() << endl;
	cout << "c1's volume is:" << c1.calculateV() << endl;

	//创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	//利用全局函数判断
	if (isSame(c1, c2)) {
		cout << "quanju:same" << endl;
	}
	else {
		cout << "quanju:not the same" << endl;
	}
	//利用成员函数判断
	if (c1.isSameByClass(c2)) {
		cout << "chengyuan:same" << endl;
	}
	else {
		cout << "chengyuan:not the same" << endl;
	}

	system("pause");
	return 0;
}
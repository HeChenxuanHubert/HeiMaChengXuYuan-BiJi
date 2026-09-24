#include<iostream>
#include<string>
using namespace	std;

//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写权限可以检测数据有效性

//人类
class Person {
public:
	//设置姓名
	void setName(string name) {
		m_Name = name;
	}
	//获取姓名
	string getName() {
		return m_Name;
	}

	//获取年龄
	int getAge() {
		return m_Age;
	}
	
	//设置偶像
	void setIdol(string Idol) {
		m_Idol = Idol;
	}

	//设置年龄（0~150）
	void setAge(int age) {
		if (age < 0 || age > 150) {
			cout << "Error." << endl;
			return;
		}
		m_Age = age;
	}

private:

	string m_Name;//可读可写

	int m_Age = 18; //只读 也可以写（年龄必须在0~150之间）

	string m_Idol;//只写

};


int main() {

	Person p;
	
	//姓名设置
	p.setName("Zhang San");
	cout << "name = " << p.getName() << endl;


	cout << "age = " << p.getAge() << endl;

	//偶像设置
	p.setIdol("XiaoMing");
	system("pause");
	return 0;
}
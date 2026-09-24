#include<iostream>
#include<string>
using namespace std;

class Building;

//类做友元
class goodGay {
public:
	
	void visit();//参观函数 访问building中的属性

	Building * building;
};

class Building {
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外写成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
goodGay::goodGay() {
	//创建建筑物对象
	building = new Building;
}
int main() {
	system("pause");
	return 0;
}